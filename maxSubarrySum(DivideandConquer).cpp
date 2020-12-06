#include <iostream>
#define N 7
using namespace std;

int maxSubarraySum(int *,int ,int);
int main()
{
	int arr[]= {2,-4,1,9,-6,7,-3};
	
	int maxSum = maxSubarraySum(arr,0,N-1);
	cout<<"Max Subarray Sum	: "<<maxSum;
	
	return 0;
}


int maxSubarraySum(int *arr,int low,int high)
{
	if(low == high)	return arr[low];
	
	int mid = (low+high)/2;
	
	int sum = 0;
	int left_sum = INT_MIN;
	
	for(int i=mid;i>=0;--i)
	{
		sum += arr[i];
		if(sum > left_sum) left_sum = sum;
	}
	
	
	sum = 0;
	int right_sum = INT_MIN;
	
	for(int i=mid+1;i<=high;++i)
	{
		sum += arr[i];
		if(sum > right_sum)	right_sum = sum;
	}
	
	int max_crossing_sum = left_sum + right_sum;
	int max_left_right = max(maxSubarraySum(arr,0,mid),maxSubarraySum(arr,mid+1,high));
	
	return max(max_crossing_sum,max_left_right);
}

