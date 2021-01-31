#include <iostream>
#define N 3


using namespace std;

int recursiveHornerRule(int *coefficientArray,int X,int pow,int res=0)
{
	if(pow==0)
	{
		res = coefficientArray[pow] + X * res;
		return res;
	}
	
	res = coefficientArray[pow] + X * res;
	
	recursiveHornerRule(coefficientArray,X,--pow,res);
}


int main()
{
	// Equation is 1.X^0 + 2.X^1 + 3.X^2 where X=3
	int arr[3]={1,2,3} , X = 3;
	cout<<recursiveHornerRule(arr,X,N-1);
	
	
	return 0;
}
