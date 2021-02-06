#include <bits/stdc++.h>

using namespace std;

int parent[100] ;
int find( int x )			//without compression
{
	if ( parent[ x ] == x ) return x;
	else return find( parent[x] );
}


void Union( int x , int y ) 			
{
	int xx = find( x );
	int yy = find( y );
	
	parent [ yy ] = xx ;
}

void create_set ( int n )				// from 1 to n 
{	
	for ( int i = 1 ; i <= n ; ++i )
		parent[i] = i ;
}



int main()
{
	int n ;					// no of elements
	cin >> n ;
	
	create_set ( n ) ;
	int e1 , e2 , q ;
	
	cin >> q ;   // Union queries
	while ( q-- )
	{
		cin >> e1 >> e2 ;
		Union ( e1 , e2 );
	}

	cin >> q ;			// find parent queries
	while ( q-- )
	{
		int x ;
		cin >> x ;
		
		cout << " set- " << find(  x ) << endl;
	}
		
	return 0 ;	
}
