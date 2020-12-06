#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,res=1;
		long long int b;
		cin>>a>>b;
		while(b>0)
		{
			if(b&1)
			res=res*a%10;
			
			a=a*a%10;
			b>>=1;
		}
		cout<<res<<endl;
	}
	
	return 0;
}