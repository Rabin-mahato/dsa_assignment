The objective of this program is to implement Dijkstra's shortest path algorithm for finding the shortest path from one node (the starting node) to all other nodes. The algorithm will use a weighted graph.

There are three structures that Dijkstra will use in this program to implement the above mentioned algorithm:

1. The adjacency matrix represents the weighted graph. The matrix is 2-dimensional and [u][v] = weight indicates the edges from u to v.

2. The distance array stores the shortest distance from the source to each vertex. 

3. The visited array indicates whether or not a vertex has been visited or processed.


There are two functions that are implemented within this program.

i. findMinVertex - This function will locate the unvisited vertex in the graph that is at the minimum distance from the source vertex. 

ii. dijkstra(int source) - This function implements the Dijkstra Algorithm which includes:

1. Function to Init.All distances to INFINITY.
2. Set Source to be 0.
3. Choosing the minimum distance vertex.
4. Update distances of all adjacent vertices to include the distance from source + distance of the selected vertex.
5. repeating until all vertices have been processed.


An example of a graph will be:

Vertices - 0,1,2,3,4
The weighted edges between the vertices in the example will be:

0 - 1(10)
0 - 3(30)
0 - 4(100)
1 - 2(50)
2 - 3(20)
2 - 4(10)
3 - 4(60)


# Main Function Description

The main function will perform the following tasks:

1. Define the weighted graph.
2. Define the source vertex.
3. Call Dijkstra's shortest path algorithm.
4. Display the shortest distances.

#Expected Output from the above main function

Dijkstra Shortest Path Algorithm(Start=0)

Vertex  Shortest Distance from Source
0    0
1    10
2    50
3    30
4    60

Conclusion:

Dijkstra's shortest path algorithm works efficiently for all graphs where the weights are positive.

The time complexity of this algorithm using the adjacency matrix is O(n^2) where n = the number of vertices in the adjacent matrix.