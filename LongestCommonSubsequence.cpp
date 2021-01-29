#include <bits/stdc++.h>
using namespace std;

int max ( int a , int b)
{
	return a > b ? a : b ;
}

int LCS ( string x , string y )
{
	int len_X = x.length();
	int len_Y = y.length();
	
	int lengthMatrix[len_X + 1][len_Y + 1];
	
	for ( int i = 0 ; i <= len_X ; ++i)
		lengthMatrix[i][0] = 0 ;
		
	for ( int i = 0 ; i <= len_Y ; ++i )
		lengthMatrix[0][i] = 0 ;
		
	for ( int i = 1 ; i <= len_X ; ++i )
		for ( int j = 1 ; j <= len_Y ; ++j )
		{
			if ( x[i-1] == y[j-1] )
				lengthMatrix[i][j] = lengthMatrix[i-1][j-1] + 1 ;
			else
				lengthMatrix[i][j] = max ( lengthMatrix[i-1][j] , lengthMatrix[i][j-1] );
		}
		
		
		
		return lengthMatrix[len_X][len_Y];
		
}

int main()
{
	string x = "abaccaba" , y = "abababackcjl";
	
	cout<< LCS ( x , y ) << endl ;
	
	return 0;
}
