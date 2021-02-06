#include <iostream>
#define N 100
using namespace std;

int parent[ N ];
int pathCompression ( int x )
{
	if ( parent[x] == x )	return x ;
	else{
		
		int fatherElem = pathCompression( parent[x] );
		
		parent[x] = fatherElem ;
		
		return fatherElem ;
	}
}
 
 
 
int main()
{
	int n ;
	cin >> n;							// 0 to n
	
	cout << " Enter set vector " ;
	
	for ( int i = 0 ; i <= n ; ++i )
	{
		cin >> parent[i];
	}
	
	for ( int i = 0 ; i <= n ; ++i )
		pathCompression(i);
	
	cout << " After Compression " << endl ;
	
	for ( int i = 0 ; i <=n ;++i )
	{
		cout << parent[i] << " " ;
	}
	
	
	
	return 0 ;
}

