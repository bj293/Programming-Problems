#include <bits/stdc++.h>

using namespace std;

int arr[100000] = { 0 } , flag;

class Graph {
  int numVertices;
  list<int> *adjLists;
  

   public:
   bool *visited;
  Graph(int V);
  void addEdge(int src, int dest);
  void DFS(int vertex);
  void BFS(void);
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
 
 void Graph::DFS(int curr)
 {
     //cout << "curr - " << " ";
     visited[curr] = true;
     arr[curr] = flag;
     for( int u : adjLists[curr])
         if(!visited[u])
             DFS(u);
 }
 
 
int totalConnectedComponents( Graph g , int totVertices )
 {
     int count = 0 ;
     for( int i = 1 ; i < totVertices ; ++i)
      {
         if(!g.visited[i])
         {
             flag++;
             count++;
             g.DFS(i);
             
         }    
     }
     
    return count;
 }
 
 
 
 int main()
 {
     long int q;
     cin >> q ;
     while(q--)
     {
         long int n , m , c_lib , c_road;
         cin >> n >> m >> c_lib >> c_road;
         
         Graph g ( n + 1 ) ;
         int u , v ;
         
         while ( m--)
         {
             cin >> u >> v ;
             g.addEdge ( u , v );
         }
         
         
         

         long int roadCost = 0 , libCost = 0;
         if ( c_lib < c_road )
            libCost = n * c_lib ;
         else
            {
                g.setVisitedFalse();
                flag = 0 ;
                int n_conn = totalConnectedComponents( g , n + 1 );
                libCost = n_conn * c_lib ;
                roadCost = ( n - n_conn ) * c_road ;
            }
         
         long int totalCost = roadCost + libCost;
         cout << totalCost << endl;
         
     }
     return 0;
 }

