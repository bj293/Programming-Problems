#include <bits/stdc++.h>

using namespace std;

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
 	visited[curr] = true;
 	
 	for( int u : adjLists[curr])
 		if(!visited[u])
 			DFS(u);
 }
 
 
 int totalConnectedComponents( Graph g , int totVertices)
 {
 	int count = 0 ;
 	for( int i = 0 ; i < totVertices ; ++i)
 	 {
 		if(!g.visited[i])
		 {
		 	count++;
		 	g.DFS(i);
		 }	
	 }
	 
	return count;
 }
 
 
 int main()
 {
 	Graph g(11);
 	
 	
 	g.addEdge(1,2);
 	g.addEdge(3,4);
 	g.addEdge(3,6);
 	g.addEdge(5,7);
 	g.addEdge(8,9);
 	
 	
 	g.setVisitedFalse();
 	int result  =  totalConnectedComponents(g,11);
 	cout<< "Total Connected Components - " << result ;
 	
 	return 0;
 }
