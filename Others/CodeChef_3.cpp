/* Problem: CodeChef Feb Long 2020
            CHPINTU 
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		int n,m;
		cin>>n>>m;
		int bas[n],pr[m],t;
		
		for(int i=0;i<m;++i)
		 pr[i]=-1;
			       
		for(int i=0;i<n;++i)
			{
			cin>>bas[i];
			pr[bas[i]-1]=0;
		    }
		    
		for(int i=0;i<n;++i)
		    {
		    	int x;
		    	cin>>x;
		    	pr[bas[i]-1]+=x;
			}
			

		int min=INT_MAX;
	    for(int i=0;i<m;++i)
	    {
	    	if(min>pr[i]&&pr[i]!=-1)
	    	{
	    		min=pr[i];
			}
		}
		
		cout<<min<<endl;
	}
	
	return 0;
}
