/*
    Program for sorting a binary array
*/
#include<stdio.h>
#define N 10
int main()
{
	int arr[N]={1,1,1,1,1,1,1,1,1,0},i,k=0;
	for(i=1;i<N;++i)
	{
		if(arr[i]==0&&arr[i-1]!=0)
		{
			arr[k++]=0;
			arr[i]=1;
		}
	}
	
	for(i=0;i<N;++i)
	{
		printf(" %d ",arr[i]);
		
	}
	
	return 0;
}
