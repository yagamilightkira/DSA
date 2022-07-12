#include <bits/stdc++.h>
using namespace std;

void addEdge( vector<int> adj[], int u, int v ) {
  adj[u].push_back(v);
  adj[v].push_back(u);
}

void printGraph( vector<int> adj[], int V ) {
  for ( int v = 0; v < V; v++ ) {
    for ( auto x : adj[v] ) {
      cout << x << " ";
    }
    printf("\n");
  }
}

int main() {
  // create a graph using adj matrix
  // n = no. of vertices
  // m = no. of edges
  // int n, m;
  // cin >> n >> m;
  // int adjMat[n+1][n+1];
  // for ( int i = 0; i < m; i++ ) {
  //   int u, v;
  //   cin >> u >> v;
  //   adjMat[u][v] = 1;
  //   adjMat[v][u] = 1;
  // }


  // Create a graph using adjacency list
  int V = 5;
  vector<int> adj[V];
  addEdge( adj, 0, 1);
  addEdge(adj, 0, 4);
  addEdge(adj, 1, 2);
  addEdge(adj, 1, 3);
  addEdge(adj, 1, 4);
  addEdge(adj, 2, 3);
  addEdge(adj, 3, 4);
  printGraph(adj, V);

  return 0;
}
