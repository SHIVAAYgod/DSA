#include <iostream>
#include <vector>
using namespace std;

struct Edge
{
    int source, dest;
    double weight;
};

struct Graph
{
    int V, E;
    struct Edge *edge;
};

struct Graph *createGraph(int V, int E)
{   
    struct Graph *graph = new Graph;
    graph->V = V;
    graph->E = E;
    graph->edge = new Edge[E];
    return graph;
}

void printA(vector<int> check[], double dist[], int n)
{
    cout<<"Destination | shortest_distance | shortest_path"<<endl;
    for (int i = 0; i < n; ++i)
    {
        cout<<i<<"\t\t"<<dist[i]<<"\t\t\t";
        for(int j = 0; j < check[i].size(); j++)
        {
            cout<<check[i][j]<<" ";
        }
        cout<<i<<endl;
    }
}
void BellmanFord(struct Graph *graph, int source)
{
    int V = graph->V;
    int E = graph->E;
    double dist[V];

    for (int i = 0; i < V; i++)
    {
        dist[i] = INT_MAX;
    }
    dist[source] = 0;
    vector<int> check[V];

    for (int i = 1; i <= V - 1; i++)
    {
        for (int j = 0; j < E; j++)
        {
            int u = graph->edge[j].source;
            int v = graph->edge[j].dest;
            double weight = graph->edge[j].weight;
            if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
            {
                dist[v] = dist[u] + weight;
                check[v].clear();
                for(int i = 0; i < check[u].size(); i++)
                {
                    check[v].push_back(check[u][i]);
                }
                check[v].push_back(u);
            }
        }
    }

    printA(check, dist, V);
    return;
}

int main()
{
    int V = 8;
    int E = 15;
    struct Graph *graph = createGraph(V, E);

    graph->edge[0].source = 0;
    graph->edge[0].dest = 1;
    graph->edge[0].weight = 0.54;
    
    graph->edge[1].source = 0;
    graph->edge[1].dest = 2;
    graph->edge[1].weight = 0.14;

    graph->edge[2].source = 1;
    graph->edge[2].dest = 2;
    graph->edge[2].weight = 0.63;

    graph->edge[3].source = 1;
    graph->edge[3].dest = 3;
    graph->edge[3].weight = 0.35;

    graph->edge[4].source = 1;
    graph->edge[4].dest = 4;
    graph->edge[4].weight = 0.30;

    graph->edge[5].source = 1;
    graph->edge[5].dest = 7;
    graph->edge[5].weight = 0.31;

    graph->edge[6].source = 2;
    graph->edge[6].dest = 3;
    graph->edge[6].weight = 0.31;

    graph->edge[7].source = 3;
    graph->edge[7].dest = 4;
    graph->edge[7].weight = 0.54;

    graph->edge[8].source = 3;
    graph->edge[8].dest = 5;
    graph->edge[8].weight = 0.43;

    graph->edge[9].source = 3;
    graph->edge[9].dest = 7;
    graph->edge[9].weight = 0.13;

    graph->edge[10].source = 4;
    graph->edge[10].dest = 5;
    graph->edge[10].weight = 0.54;

    graph->edge[11].source = 4;
    graph->edge[11].dest = 6;
    graph->edge[11].weight = 0.62;

    graph->edge[12].source = 4;
    graph->edge[12].dest = 7;
    graph->edge[12].weight = 0.54;

    graph->edge[13].source = 5;
    graph->edge[13].dest = 6;
    graph->edge[13].weight = 0.37;

    graph->edge[14].source = 0;
    graph->edge[14].dest = 7;
    graph->edge[14].weight = 0.47;
    
    cout<<"\n Shortest Path algorithm, BellmanFord \n";
    BellmanFord(graph, 0);
    return 0;
}