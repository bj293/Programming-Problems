/*
	 Problem Source : CLRS 3rd Edition Page. 68
*/
#include <bits/stdc++.h>
#define N 7
using namespace std;


typedef struct{
	int left_i,right_i,value;
} tuplee;

tuplee maxSubarrayBrute(int *arr , int , int);
tuplee maxSubarrayDivideandConquer(int *arr , int , int);

int main()
{
	int prices[] ={ 100,102,98,99,108,102,93,90,90};
	int diff_arr[7];   //for max increment period
	
	for(int i=0;i<N;++i)
		diff_arr[i] = prices[i+1] - prices[i];
	
	
	tuplee ans  = maxSubarrayBrute(diff_arr,0,N);
	
	cout<<ans.value<<" "<<ans.left_i<<" "<<ans.right_i;
	
	return 0;
}

tuplee maxSubarrayBrute(int *arr , int low, int high)
{
	tuplee max_subarray = {0,0,0};
	
	if(low == high)	return {low,low,arr[low]};
	
	int mid = (low+high)/2;
	
	int sum = 0 ,li = mid;
	int left_sum = 0;
	
	for(int i=mid;i>=0;--i)
	{
		sum += arr[i];
		if(sum > left_sum) 
		{
			left_sum = sum;
			li = i;
		}
	}
	
	
	sum = 0;
	int right_sum = 0 , ri = mid;
	
	for(int i=mid+1;i<=high;++i)
	{
		sum += arr[i];
		if(sum > right_sum)
		{
			right_sum = sum;
			ri = i;
		}
	}
	
	int crossing_value = left_sum + right_sum;
	
	tuplee max_crossing_sum = { li , ri , crossing_value};
	tuplee left_max = maxSubarrayBrute(arr,0,mid);
	tuplee right_max = maxSubarrayBrute(arr,mid+1,high);
	
	//return max(max_crossing_sum,max_left_right);
	
	if(left_max.value > right_max.value && left_max.value > crossing_value)
		return left_max;
	else if( right_max.value > left_max.value && right_max.value > crossing_value)
		return right_max;
	else
		return max_crossing_sum;
	
	
}
