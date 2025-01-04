#include <bits/stdc++.h>
using namespace std;


struct Edge {
    int src, dest, weight;
};

struct Graph {
    int V, E; 
    vector<Edge> edges; 
};

struct Subset {
    int parent, depth;
};

int find(Subset subsets[], int i) {
    if (subsets[i].parent != i) {
        subsets[i].parent = find(subsets, subsets[i].parent);
    }
    return subsets[i].parent;
}

void unionSubsets(Subset subsets[], int x, int y) {
    int rootX = find(subsets, x);
    int rootY = find(subsets, y);

    if (subsets[rootX].depth < subsets[rootY].depth) {
        subsets[rootX].parent = rootY;
    } else if (subsets[rootX].depth > subsets[rootY].depth) {
        subsets[rootY].parent = rootX;
    } else {
        subsets[rootY].parent = rootX;
        subsets[rootX].depth++;
    }
}


bool compareEdges(Edge a, Edge b) {
    return a.weight < b.weight;
}


void krushkals_MST(Graph& graph) {
    int V = graph.V;
    vector<Edge> result; 
    int e = 0;           

    sort(graph.edges.begin(), graph.edges.end(), compareEdges);

    Subset* subsets = new Subset[V];
    for (int v = 0; v < V; ++v) {
        subsets[v].parent = v;
        subsets[v].depth = 0;
    }

    
    for (const Edge& edge : graph.edges) {
        if (e == V - 1) break; // MST has V-1 edges

        int x = find(subsets, edge.src);
        int y = find(subsets, edge.dest);

       
        if (x != y) {
            result.push_back(edge);
            e++;
            unionSubsets(subsets, x, y);
        }
    }

    
    cout << "Edges in the Minimum Spanning Tree:\n";
    for (const Edge& edge : result) {
        cout << edge.src << " -- " << edge.dest << " == " << edge.weight << endl;
    }

    delete[] subsets;
}

int main() {
    int V, E;
    cout << "Enter the number of vertices and edges: ";
    cin >> V >> E;

    Graph graph;
    graph.V = V;
    graph.E = E;

    cout << "Enter edges [source, destination, weight]:\n";
    for (int i = 0; i < E; i++) {
        Edge edge;
        cin >> edge.src >> edge.dest >> edge.weight;
        graph.edges.push_back(edge);
    }

    krushkals_MST(graph);

    return 0;
}
