BELLMAN-FORD(G, w, s):

    // Step 1: Initialize distances
    for each vertex v in G.V:
        v.d = ∞       
        v.π = NIL   
    s.d = 0           

    // Step 2: Relax all edges |V| - 1 times
    for i = 1 to |G.V| - 1:
        for each edge (u, v) in G.E:
            if v.d > u.d + w(u, v): 
                v.d = u.d + w(u, v)
                v.π = u

    // Step 3: Check for negative weight cycles
    for each edge (u, v) in G.E:
        if v.d > u.d + w(u, v):  
            return FALSE         

    return TRUE  
