# Program 5: Undirected Graph using Adjacency Matrix with BFS and DFS

## Aim

To implement an undirected graph using adjacency matrix and perform BFS and DFS traversal.

---

## Data Structure Used

### Adjacency Matrix

int adj[MAX][MAX];

- 2D array used to represent edges.
- If there is an edge between vertex u and v:
    adj[u][v] = 1
    adj[v][u] = 1 (because graph is undirected)

### Visited Array

int visited[MAX];

Used to track whether a vertex has been visited.

---

## Functions Implemented

### addEdge(int u, int v)
Adds an undirected edge between vertices u and v.

### BFS(int start)
Implements Breadth First Search using queue.
- Visits level by level.
- Uses visited array to avoid repetition.

### DFS(int vertex)
Implements Depth First Search using recursion.
- Visits as deep as possible before backtracking.

---

## Example Graph Used

Vertices: 0, 1, 2, 3, 4

Edges:
0 - 1
0 - 2
1 - 3
2 - 4

Graph structure:

        0
       / \
      1   2
      |   |
      3   4

---

## Main Function Overview

1. Initialize adjacency matrix.
2. Add edges.
3. Call DFS starting from vertex 0.
4. Call BFS starting from vertex 0.

---

## Sample Output

DFS Traversal:
0 1 3 2 4

BFS Traversal:
0 1 2 3 4

---

## Conclusion

Adjacency matrix is simple to implement for small graphs.
DFS explores depth-wise while BFS explores level-wise.

Adjacency matrix is simple to implement for small graphs.
DFS explores depth-wise while BFS explores level-wise.
