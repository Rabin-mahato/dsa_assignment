#include <stdio.h>
#define MAX 10

int adj[MAX][MAX]; // Adjacency matrix
int visited[MAX];  // Visited array
int n;             // Number of vertices

/* -------- Add Edge (Undirected) -------- */

void addEdge(int u, int v)
{
    adj[u][v] = 1;
    adj[v][u] = 1; // because graph is undirected
}

/* -------- BFS Traversal -------- */

void BFS(int start)
{

    int queue[MAX];
    int front = 0, rear = 0;

    for (int i = 0; i < n; i++)
        visited[i] = 0;

    visited[start] = 1;
    queue[rear++] = start;

    printf("BFS Traversal: ");

    while (front < rear)
    {

        int current = queue[front++];
        printf("%d ", current);

        for (int i = 0; i < n; i++)
        {
            if (adj[current][i] == 1 && visited[i] == 0)
            {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }

    printf("\n");
}

/* -------- DFS Traversal (Recursive) -------- */

void DFS(int vertex)
{

    visited[vertex] = 1;
    printf("%d ", vertex);

    for (int i = 0; i < n; i++)
    {
        if (adj[vertex][i] == 1 && visited[i] == 0)
        {
            DFS(i);
        }
    }
}

/* -------- Main Function -------- */

int main()
{

    n = 5; // number of vertices (0 to 4)

    // Initialize matrix to 0
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            adj[i][j] = 0;

    // Example Graph
    // Edges:
    // 0-1, 0-2, 1-3, 2-4

    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(2, 4);

    printf("DFS Traversal: ");
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    DFS(0);
    printf("\n");

    BFS(0);

    return 0;
}
