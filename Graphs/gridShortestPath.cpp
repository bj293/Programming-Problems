#include <bits/stdc++.h>
#define N	4
#define M	4
using namespace std;

int nodes_left_in_layer = 1 , nodes_in_next_layer = 0 ;
bool visited[N][M];
queue<int> rq , cq ;

void checkNeighbours( char g[N][M] ,int r , int c );
int shortestPath( char grid[N][M] , int srow , int scol)
{
	visited[srow][scol] = true;
	rq.push(srow);
	cq.push(scol);
	
	int pathLength = 0 , flag = 0;
	while( !rq.empty() )
	{
		int r = rq.front();
		rq.pop();
		int c = cq.front();
		cq.pop();
		
		if( grid[r][c] == 'd')
		{
			flag = 1 ;
			break;
		}
		
		checkNeighbours(grid ,r,c);
		cout << " this " << r << " " << c << endl ;
		nodes_left_in_layer--;
		if(!nodes_left_in_layer)                      // On completion of layer increase distance by 1
		{
			nodes_left_in_layer = nodes_in_next_layer;
			nodes_in_next_layer = 0;
			pathLength++;
		}
	}
	
	if(flag)
		return pathLength;
	else
		return -1 ;
	
}

void checkNeighbours(char grid[N][M], int row , int col )
{
	int v1[] = { 0, 0 , -1 , 1};
	int v2[] = { -1 , 1 , 0 , 0 } ;
	
	for( int i = 0 ; i <=3 ; ++i )
	{
		int rr = row + v1[i] ;
		int cc = col + v2[i] ;
		
		
		if(rr < 0 || rr >= N) continue;
		if(cc < 0 || cc >= M) continue;
		
		
		if(visited[rr][cc]) continue;
		if(grid[rr][cc] == '#') continue;						//  indicates blocked area
		
		
		rq.push(rr);
		cq.push(cc);
		visited[rr][cc] = true;
		nodes_in_next_layer++;
		
		
	}
}



int main()
{
    char grid[N][M] = { { '#', '*', '#', 's' }, 
                        { '*', '#', '*', '*' }, 
                        { '#', '*', '*', '*' }, 
                        { 'd', '*', '*', '*' } }; 
                        
                        
    cout<< shortestPath(grid , 0 , 3);
}
