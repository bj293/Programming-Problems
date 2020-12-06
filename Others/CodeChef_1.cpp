/* Problem: CodeChef Feb Long 2020
            SNUG_FIT
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		int n;
		cin>>n;
		vector<long int>v1,v2;
	    
		long int x;	
		for(int i=0;i<n;++i)
		{
			cin>>x;
			v1.push_back(x);
		}

		for(int i=0;i<n;++i)
		{
			cin>>x;
			v2.push_back(x);
		}
		
		sort(v1.begin(),v1.end();
		sort(v2.begin(),v2.end();
		long int s=0;
		
		for(int i=0;i<n;++i)
		s+=(v1[i]>v2[i]?v2[i]:v1[i]);
		
		cout<<s<<endl;
	}
	return 0;
}
