#include <bits/stdc++.h>
using namespace std;

class Graph {
  int numVertices;
  list<int> *adjLists;
  bool *visited;

   public:
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
 
 
// DFS algorithm
void Graph::DFS(int current) {


	visited[current] = true;
	cout<<current << " ";
		

  	for (int u : adjLists[current])
    	if (!visited[u])
      		DFS(u);

}

// BFS algorithm

void Graph::BFS(void){
		
	list<int> q;
	q.push_back(0);
	visited[0] = true;
	
	while(!q.empty())
	{
		int u = q.front();
		q.pop_front();
		cout<< u << "  ";
		
		for( int i : adjLists[u])
			if(!visited[i]){
				q.push_back(i);
				visited[i] = true;
			}	
	}
}

int main() {
  Graph g(4);
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 3);
  
  g.setVisitedFalse();
  int start_node = 2 ;
  cout<<" DFS \n";
  g.DFS(start_node) ;
  
  g.setVisitedFalse();
  cout<<endl<<"BFS"<<endl;
  g.BFS();
  

  return 0;
}
