DIJKSTRA(G, w, s):
    // Input:
    //   G: Graph with vertices V and edges E
    //   w: Weight function for edges
    //   s: Source vertex

    // Step 1: Initialize distances and predecessors
    for each vertex v in G.V:
        v.d = ∞       // Set distance to infinity
        v.π = NIL     // Set predecessor to NIL
    s.d = 0           // Distance to source is 0

    // Step 2: Create a priority queue of all vertices
    Q = G.V

    // Step 3: Process vertices in the priority queue
    while Q is not empty:
        u = EXTRACT-MIN(Q)  // Extract the vertex with the minimum distance
        for each vertex v in G.Adj[u]:  // For each neighbor of u
            if v.d > u.d + w(u, v):     // Relaxation step
                v.d = u.d + w(u, v)     // Update distance to v
                v.π = u                 // Update predecessor of v
                DECREASE-KEY(Q, v)      // Update v's position in the priority queue

    // The shortest distances are stored in v.d, and paths can be reconstructed using v.π
