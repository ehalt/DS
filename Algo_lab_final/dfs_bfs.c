Algorithm: DFS(u)
1. Color[u] = GREY
2. for each v in Adj[u]
3. if Color[v] = WHITE then
4. do DFS(v)
5. Color[v] = BLACK



  
The Breadth First Search algorithm is given below:
Color = 1D Array of size |V|
Adj = 2D List of |V| rows



  
Algorithm: BFS(s)
1. Color[s] = 1
2. ENQUEUE(Q, s)
3. while Q != EMPTY
4. u = DEQUEUE(Q)
5. for each v in Adj[u]
6. if Color[v] = 0 then
7. do ENQUEUE(Q, v)
8. Color[v] = 1
