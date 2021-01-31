#include "bits/stdc++.h"
using namespace std;

int main()
{
	int n , h , k;
	cin>>n>>h>>k;
	
	int temp;
	int  potatoLength[n];
	
	for(int i=0;i<n;++i)
	{
		scanf("%d",&potatoLength[i]);
		//cin>>temp;
		//potatoLength.push_back(temp);
	}
	
	
	int rem = 0 , i = 0 ;
	long long  timeCount = 0;
	
	do{
		while(rem + potatoLength[i] <= h && i < n)
		{
			rem += potatoLength[i];
			i++;
		}
		
		timeCount += (rem >= k)? rem / k : 1;
		rem = (rem >= k )?  rem % k : 0;
		//rem = rem%k;
		
	} while(rem || (i < n));
	
	cout<<timeCount;
	
	
	return 0;
}
