/* 
	Source - https://www.hackerrank.com/challenges/dynamic-programming-classics-the-longest-common-subsequence/problem 
*/


#include <bits/stdc++.h>
#define N 100
using namespace std;

int max ( int a , int b)
{
    return a > b ? a : b ;
}

void LCS ( int *x , int  *y , int len_X , int len_Y )
{

    
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
		
		
		 
    vector<int> subsequence ;
    for ( int i = len_X , j = len_Y ; i > 0 && j > 0  ; )
    {
        if ( lengthMatrix[i-1][j] == lengthMatrix[i][j] )
            i-- ;
        else if ( lengthMatrix[i][j-1] == lengthMatrix[i][j] )
            j-- ;
        else {
            subsequence.push_back(x[i-1]);
            i--;
            j--;
        }
        
    }
    reverse(subsequence.begin() , subsequence.end());
    
    for ( int i = 0 ; i < subsequence.size() ; i++)
        cout << subsequence[i] << " ";
            
        
}

int main()
{
    int x[N] , y[N] , len1 , len2;
    
    cin >> len1 >> len2 ;
    for ( int i = 0 ; i < len1 ; ++i )
        cin >> x[i] ;
    for ( int i = 0 ; i < len1 ; ++i )
        cin >> y[i] ;
    
    
    
    
    LCS ( x , y , len1 , len2 ) ;
    
    return 0;
}

