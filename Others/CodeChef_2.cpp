/* Problem: CodeChef Feb Long 2020
            CASH 
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		int n,x,k;
		cin>>n>>k;
		vector<int>v;
		for(int i=0;i<n;++i)
		{
			cin>>x;
			v.push_back(x%k);
		}
		
		int s=v[0];
		for(int i=1;i<n;++i)
		{
			if(v[i])
			{
				if((v[i]+s)>=k)
				s-=k-v[i];
				else s+=v[i];
			}
		}
		cout<<s<<endl;
		
	}
	return 0;
}
