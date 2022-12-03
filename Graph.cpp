/*A company named RT&T has a network of n switching stations connected by m high-speed communication links. 
Each customer's phone is directly connected to one station in his or her area.
The engineers of RT&T have developed a prototype video-phone system that allows two customers to see each other during a phone call. 
In order to have acceptable image quality, however, the number of links used to transmit video signals between the two parties cannot exceed 4. 
Suppose that RT&T's network is represented by a graph. Design an efficient algorithm and write the program that computes, 
for each station, the set of stations it can reach using no more than 4 links */

#include <iostream>
#include <vector>
using namespace std;

#define V 20

#define MAX 10000

void printPath(int path[][V], int v, int u,vector<int>& vct)
{
	if (path[v][u] == v) {
		return;
	}

	printPath(path, v, path[v][u],vct);
	vct.push_back(path[v][u]);
}

void printSolution(int dist[][V], int path[][V])
{
	for (int i = 0; i < V; i++)
	{
		for (int j = 0; j < V; j++)
		{
			if (dist[i][j] == MAX)
				cout << "INF" << "	 ";
			else
				cout << dist[i][j] << "	 ";
		}
		cout << endl;
	}
	
	for (int v = 0; v < V; v++)
	{
		for (int u = 0; u < V; u++)
		{
			if (u != v && dist[v][u] != -1)
			{
				vector<int> vct;
				printPath(path, v, u,vct);
				if(vct.size()>3) cout<<u<<" can't be reached from "<<v<<" under permissible image quality constraints of no more than 4 links."<<endl;
				else
				{cout << "The shortest path from " << v << " to " << u << " is ("
					<< v << " ";
				for(auto x: vct) cout<<x<<" ";
				cout << u << ")" << endl;}
			}

		}
		cout<<endl;
	}
}


void floydWarshall(int graph[][V])
{
	int path[V][V];
	int dist[V][V], i, j, k;

	for (i = 0; i < V; i++)
		for (j = 0; j < V; j++)
			dist[i][j] = graph[i][j];

	for (int v = 0; v < V; v++)
	{
		for (int u = 0; u < V; u++)
		{

			if (v == u) {
				path[v][u] = 0;
			}
			else if (dist[v][u] != INT_MAX) {
				path[v][u] = v;
			}
			else {
				path[v][u] = -1;
			}
		}
	}

	for (k = 0; k < V; k++)
	{
		for (i = 0; i < V; i++)
		{
			for (j = 0; j < V; j++)
			{
				if (dist[i][k] + dist[k][j] < dist[i][j])
				{
					dist[i][j] = dist[i][k] + dist[k][j];
					path[i][j] = path[k][j];
				}
			}
		}
	}
	printSolution(dist, path);
}


int main()
{
	int graph[V][V] = { {0, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, 1, MAX, MAX, 2 ,MAX ,3},
						{MAX, 0, 4, 5, MAX, MAX, 6, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX ,MAX ,MAX ,MAX},
						{MAX, 4, 0, MAX, 7, 8, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX},
						{MAX, 5, MAX, 0, MAX, MAX, MAX, 9, 10, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX},
						{MAX, MAX, 7, MAX, 0, 11, MAX, MAX, MAX, MAX, MAX, 12, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX},
						{MAX, MAX, 8, MAX, 11, 0, 13, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX},
						{MAX, 6, MAX, MAX, MAX, 13, 0, 14, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX},
						{MAX, MAX, MAX, 9, MAX, MAX, 14, 0, MAX, MAX, 15, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX},
						{MAX, MAX, MAX, 10, MAX, MAX, MAX, MAX, 0, 16, 17, MAX, 18, MAX, MAX, MAX, MAX, MAX, MAX, MAX},
						{MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, 16, 0, 19, 20, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX},
						{MAX, MAX, MAX, MAX, MAX, MAX, MAX, 15, 17, 19, 0, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, 21},
						{MAX, MAX, MAX, MAX, 12, MAX, MAX, MAX, MAX, 20, MAX, 0, MAX, 22, MAX, MAX, MAX, MAX, MAX, MAX},
						{MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, 18, MAX, MAX, MAX, 0, MAX, 23, MAX, MAX, MAX, 24, MAX},
						{MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, 22, MAX, 0, MAX, 25, MAX, 26, MAX, MAX},
						{1, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, 23, MAX, 0, 27, MAX, MAX, 28, MAX},
						{MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, 25, 27, 0, 29, MAX, MAX, MAX},
						{MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, 29, 0, MAX, 30, 31},
						{2, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, 26, MAX, MAX, MAX, 0, MAX, 32},
						{MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, 24, MAX, 28, MAX, 30, MAX, 0, MAX},
						{3, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, MAX, 21, MAX, MAX, MAX, MAX, MAX, 31, 32, MAX, 0},
	};

	cout << "The shortest distance between all pairs of Nodes is:-\n";
	floydWarshall(graph);
	return 0;
}
