/*
    Problem: CodeChef June Long 2020
            CHFICRM

    Problem Link : https://www.codechef.com/JUNE20B/problems/CHFICRM
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,c;
		vector<int>v;
		cin>>n;
		for(int i=0;i<n;++i)
		{
			cin>>c;
			v.push_back(c);
		}
		
		if(v[0]!=5)
		cout<<"NO\n";
		else
		{
			int chef_c[2]={0,0};
			
			int flag=0;
			
			for(int i=0;i<n;++i)
			{
				if(v[i]==5)  chef_c[0]++;
				else if(v[i]==10)
				{
					if(chef_c[0]==0)
					{
						flag=1;
						break;
					}
					else{
						chef_c[0]--;
						chef_c[1]++;
					}
				}
				
				else{
					if(chef_c[1]>=1)  chef_c[1]--;
					else if(chef_c[0]>=2)   chef_c[0]-=2;
					else {
						flag=1;
						break;
					}
				}
			}
			
		if (flag==1)
		cout<<"NO\n";
		else cout<<"YES\n";
		}
		

	}
	
	return 0;
}
