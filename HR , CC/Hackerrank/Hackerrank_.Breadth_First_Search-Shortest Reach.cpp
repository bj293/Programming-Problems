/*
	Problem source : https://www.hackerrank.com/challenges/bfsshortreach/problem
*/
#include <bits/stdc++.h>

using namespace std;

int dist[ 1000 ] , level = 1 ;
class Graph {
  int numVertices;
  list<int> *adjLists;
  

   public:
   bool *visited;
  Graph(int V);
  void addEdge(int src, int dest);
  void DFS(int vertex);
  void BFS(int curr);
  void setVisitedFalse( void );
};

// Initialize graph
Graph::Graph(int vertices) {
  numVertices = vertices;
  adjLists = new list<int>[vertices];
  visited = new bool[vertices];
}

// Add edges
void Graph::addEdge(int src, int dest) {
  adjLists[src].push_front(dest);
  adjLists[dest].push_front(src);
  
}

// Set the visited array false
 void Graph::setVisitedFalse( )
 {
     for(int i=0;i<numVertices;++i)
        visited[i] = false;
 }
 
void Graph::BFS( int curr ){
    
    for ( int i = 0 ; i < 1000 ; ++i )
        dist[i] = 0 ;
        
    list<int> q;
    q.push_back(curr);
    visited[curr] = true;
    dist[curr] = 0 ;
    
    while(!q.empty())
    {
        int u = q.front();
        q.pop_front();
        
        for( int i : adjLists[u])
            if(!visited[i]){
                q.push_back(i);
                visited[i] = true;
                dist[i] = dist[u] + 1 ;
            }    
    }
}
 
 
 int shortestPath( Graph g , int n , int source )
 {
     int count = 0 ;
     g.BFS(source);
     
     for ( int i = 1 ; i <= n ; ++i )
     {
          if ( i == source );
          else if ( g.visited[i] == false )
            cout << -1 << " ";
          else 
            cout << dist[i] * 6 << " ";

     }
     
    return count;
 }
 
 
 int main()
 {
     int q;
     cin >> q ;
     
     while ( q-- )
     {
         int n , e ;
         cin >> n >> e ;
         
         Graph g ( n + 1 );
         
         while ( e-- )
         {
             int u , v ;
             cin >> u >> v ;
             g.addEdge(u, v);
         }
         
          
         int source ;
         cin >> source ;
           
         g.setVisitedFalse();
         shortestPath(g , n , source);
         cout << endl ;
     }
     
     return 0;
 }

