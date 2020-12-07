#include <bits/stdc++.h>
using namespace std;
 
class Graph {
	public:
  int numVertices;
  list<int> *adjLists;
  bool *visited;
  Graph(int V);
  void addEdge(int src, int dest);
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
 


void displayShortestPath( Graph g ,int totVertices, int source , int dest)
{
	
	// BFS algorithm	
	list<int> q;
	q.push_back(source);
	g.visited[source] = true;
	int prev[totVertices];
	prev[source] = -1 ;
	
	while(!q.empty())
	{
		int u = q.front();
		q.pop_front();
		
		for( int i : g.adjLists[u])
			if(!g.visited[i]){
				q.push_back(i);
				g.visited[i] = true;
				prev[i] = u ;
			}	
	}
	
	
	if(!g.visited[dest])								// If disconnected graph
		cout << " No path exists " ;
	else {
		vector<int> path;
		
		
		
		for( int v = dest ; v != -1 ; v = prev[v])
			path.push_back(v);
			
		reverse(path.begin() , path.end());				
		
		cout << " \n  Path : " ;
		for(int u : path)
			cout<< u << " " ;
	}
}


int main()
{
	Graph g(8);
	
	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(2,4);
	g.addEdge(4,5);
	g.addEdge(3,7);
	g.addEdge(6,7);
	g.addEdge(5,3);
	g.addEdge(6,5);
	
	g.setVisitedFalse();
	displayShortestPath( g , 8 , 1 , 7 ) ;
	
	
	return 0;
	
}

