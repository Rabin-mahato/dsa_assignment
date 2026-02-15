#include <stdio.h>
#define MAX 10
#define INF 9999

int graph[MAX][MAX];
int dist[MAX];
int visited[MAX];
int n;

/* -------- Find Vertex with Minimum Distance -------- */

int findMinVertex()
{

    int min = INF;
    int minIndex = -1;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && dist[i] < min)
        {
            min = dist[i];
            minIndex = i;
        }
    }

    return minIndex;
}

/* -------- Dijkstra Algorithm -------- */

void dijkstra(int source)
{

    for (int i = 0; i < n; i++)
    {
        dist[i] = INF;
        visited[i] = 0;
    }

    dist[source] = 0;

    for (int count = 0; count < n - 1; count++)
    {

        int u = findMinVertex();
        visited[u] = 1;

        for (int v = 0; v < n; v++)
        {

            if (!visited[v] &&
                graph[u][v] != 0 &&
                dist[u] != INF &&
                dist[u] + graph[u][v] < dist[v])
            {

                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printf("Vertex\tDistance from Source\n");
    for (int i = 0; i < n; i++)
        printf("%d\t%d\n", i, dist[i]);
}

/* -------- Main Function -------- */

int main()
{

    n = 5;

    int exampleGraph[5][5] = {
        {0, 10, 0, 30, 100},
        {10, 0, 50, 0, 0},
        {0, 50, 0, 20, 10},
        {30, 0, 20, 0, 60},
        {100, 0, 10, 60, 0}};

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            graph[i][j] = exampleGraph[i][j];

    int source = 0;

    printf("Dijkstra's Algorithm (Source = %d)\n\n", source);

    dijkstra(source);

    return 0;
}
