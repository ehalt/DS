KRUSKAL(G):
    A = ∅  // A will store the edges of the MST
    for each vertex v in G.V:
        MAKE-SET(v)  // Create a set for each vertex

    sort the edges of G.E in non-decreasing order by weight

    for each edge (u, v) in G.E (in sorted order):
        if FIND-SET(u) ≠ FIND-SET(v):  // Check if u and v are in different sets
            A = A ∪ {(u, v)}           // Add the edge to the MST
            UNION(u, v)                // Merge the sets of u and v

    return A
