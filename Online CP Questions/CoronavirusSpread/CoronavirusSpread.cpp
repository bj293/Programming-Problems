/*
   Problem: Coronavirus Spread
   CodeChef Long May2020
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int a[n],check[10]={0};
		for(int i=0;i<n;++i)
		cin>>a[i];
		
		for(int i=1;i<n;++i)
		{
			int temp=1;
			int ii=i;
			while((a[ii]-a[ii-1])<=2 && ii<n)
			{
				++temp;
				++ii;
			}
			
			if((a[i-1]-a[i-2]<=2)&&(i>1))
			check[i-1]=check[i-2];
			else
			check[i-1]+=temp;
		}
		
		check[n-1]=((a[n-1]-a[n-2])>2)?1:(check[n-2]);
		
		int mn=11,mx=0;
		for(int i=0;i<n;++i)
		{
			mn=min(mn,check[i]);
			mx=max(mx,check[i]);
		}
		
		
		cout<<mn<<" "<<mx;
		
	}
	
	return 0;
}
