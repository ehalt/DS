PRIM(G, w, r):  // G is the graph, w is the weight function, r is the starting vertex
    for each vertex u in G.V:
        u.key = ∞       // Initialize key to infinity
        u.π = NIL       // π is the parent of u in the MST

    r.key = 0           // Start with the root vertex
    Q = G.V             // Priority queue of all vertices

    while Q is not empty:
        u = EXTRACT-MIN(Q)  // Extract the vertex with the minimum key
        for each vertex v in G.Adj[u]:  // For each neighbor of u
            if v ∈ Q and w(u, v) < v.key:
                v.π = u       // Update v's parent
                v.key = w(u, v)  // Update v's key

    // The MST is represented by the parent pointers π
