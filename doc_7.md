# Program 7: Dijkstra’s Algorithm for Shortest Path

## Aim

To implement Dijkstra’s algorithm to find the shortest path from a source node to all other nodes in a weighted graph.

---

## Data Structure Used

### Adjacency Matrix

int graph[MAX][MAX];

Used to represent weighted graph.
If graph[u][v] = weight → there is an edge between u and v.

### Distance Array

int dist[MAX];

Stores shortest distance from source to each vertex.

### Visited Array

int visited[MAX];

Marks whether a vertex is finalized (visited) or not.

---

## Functions Implemented

### findMinVertex()

Finds the unvisited vertex having minimum distance value.

### dijkstra(int source)

Implements Dijkstra’s algorithm:

1. Initialize all distances to infinity.
2. Set source distance to 0.
3. Select minimum distance vertex.
4. Update distances of adjacent vertices.
5. Repeat until all vertices are visited.

---

## Example Graph Used

Vertices: 0, 1, 2, 3, 4

Weighted edges:

0 - 1 (10)  
0 - 3 (30)  
0 - 4 (100)  
1 - 2 (50)  
2 - 3 (20)  
2 - 4 (10)  
3 - 4 (60)

---

## Main Function Overview

1. Define weighted graph.
2. Choose source vertex (0).
3. Call dijkstra().
4. Print shortest distances.

---

## Sample Output

Dijkstra's Algorithm (Source = 0)

Vertex  Distance from Source
0       0
1       10
2       50
3       30
4       60

---

## Conclusion

Dijkstra’s algorithm finds shortest paths efficiently 
for graphs with non-negative weights.
Time complexity using adjacency matrix is O(n²).
