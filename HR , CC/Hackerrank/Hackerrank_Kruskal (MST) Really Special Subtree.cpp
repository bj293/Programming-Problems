/*
	Problem source : https://www.hackerrank.com/challenges/kruskalmstrsub/problem
*/

#include <bits/stdc++.h>
using namespace std;


vector < int > parent ;
struct graph{
    int source , dest , weight;
}g[10000];


bool comp(struct graph x , struct graph y)
{
    return ( x.weight <= y.weight);
}




int find( int x )
{
    if ( parent[ x ] == x ) return x;
    else return find( parent[x] );
}



void unions ( int x , int y )
{
    int xx = find( x );
    int yy = find( y );
    
    parent [ yy ] = xx ;
}


void kruskals(int n , int e ) {

    int totCost = 0 ;
    
    for ( int i = 0 ; i < e ; ++i )
    {
        int src = g[i].source ;
        int des = g[i].dest ;
        if( find( src ) != find( des ) )
        {
            totCost += g[i].weight;
            unions ( src , des );
        }
    }
    
    
    cout << totCost ;
    
}


int main()
{
    int n , e ;
    cin >> n >> e ;
    
    
    for ( int i = 0 ; i <= n ; ++i )
    {
        parent.push_back(i);
    }
    
    int u , v , w , temp = e , i = 0;
    
    while ( temp-- )
    {
        cin >> u >> v >> w ;
        g[i].source = u ;
        g[i].dest = v ;
        g[i].weight = w ;
        
        i++;
    }
    
    sort ( g , g + e , comp );
    kruskals( n , e) ;
    
    return 0 ;
}
