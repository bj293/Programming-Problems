#include <bits/stdc++.h>
using namespace std;

void Merge(int sortedSubArray[],int start,int mid,int end)
{
	int N1 = mid - start + 1 , N2 = end - mid;
	int firstSortedSubArray[N1+1] , secondSortedSubArray[N2+1];
	
	firstSortedSubArray[N1] = INT_MAX;
	secondSortedSubArray[N2] = INT_MAX;
	
	for(int i=0;i<N1;++i)
			firstSortedSubArray[i]= sortedSubArray[start+i];
	
	for(int i=0;i<N2;++i)
			secondSortedSubArray[i]= sortedSubArray[mid + i + 1];
			
	int i=0,j=0;
	
	for(int k=start;k<=end;++k)
	{
		if(firstSortedSubArray[i] <= secondSortedSubArray[j])
		{
			sortedSubArray[k] = firstSortedSubArray[i];
			i++;
		}
		else
		{
			sortedSubArray[k] = secondSortedSubArray[j];
			j++;
		}
	}
}

void MergeSort(int arr[],int start,int end)
{
	if(start<end)
	{
		int mid = (start + end ) / 2;
		MergeSort(arr,start,mid);
		MergeSort(arr,mid+1,end);
		
		Merge(arr,start,mid,end);
	}
}

int main()
{
	int a[5]={3,2,8,5,4};
	
	MergeSort(a,0,4);
	
	for(int i=0;i<5;++i)
		cout<<a[i]<<" ";
	return 0;
}
