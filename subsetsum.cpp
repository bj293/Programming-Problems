#include <iostream>

bool subsetSum ( int * , int , int ) ;

int main()
{
	int a[5] = {  2, 3, 5 , 1 , 7 };
	std::cout << subsetSum( a , 5 , 11 ) ;
	
	
	return 0 ;
}



bool subsetSum( int *arr , int N , int S )
{
	bool ssArray[ N+1 ][ S+1 ] ;
	
	for ( int i = 0 ; i <= N ; ++i )
		ssArray[i][0] = true ;
	
	for ( int i = 1 ; i <= S ; ++i )
		ssArray[0][i] = false ;
	
	for ( int i = 1 ; i <= N ; ++i ){						// for accessing i th element of array
		for ( int j = 1 ; j <= S ; ++j )					// for cheking if subset with sum = j exists
		{
			// check if subset sum j with accessing till i th element of the array exists or not
			
			if ( arr[i-1] > j )
				ssArray[i][j] = ssArray[i-1][j] ;
			else
				ssArray[i][j] = ssArray[i-1][j - arr[i-1]] || ssArray[i-1][j] ;
		}
	}
	
	
	return ssArray[N][S];
}
