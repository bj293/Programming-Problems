#include <iostream>
#define N 5
using namespace std;

void insertionSortUsingRecursion(int *,int);
int main()
{
	int a[5]={3,7,1,9,2};
	insertionSortUsingRecursion(a,N-1);
	
	for(int i=0;i<N;++i)
		cout<<a[i]<<" ";
	
	return 0;
}

void insertionSortUsingRecursion(int *arr, int n)
{
	if(n==1)	return;
	
	insertionSortUsingRecursion(arr,n-1);
	
	int key=arr[n] , i=n-1;
	
	while(i>=0 && key<arr[i])
	{
		arr[i+1]=arr[i];
		i--;
	}
	
	arr[i+1]=key;
}
