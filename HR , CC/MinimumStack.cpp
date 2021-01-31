#include <bits/stdc++.h>
using namespace std;
int min1(int a,int b)
{
	return a>b?b:a;
}
int main()
{
	stack<pair<int,int> > st;
	int n,m;
	cout<<"enter the number of elements for the stack ";
	cin>>n;
	for(int i=0;i<n;++i)
	{
		cout<<"\nenter an element :\n";
		cin>>m;
		int n_min=st.empty()?m:min(m,st.top().second);
		st.push({m,n_min});
	
	    cout<<"\nTop element of the stack "<<st.top().first<<"	min element of the stack "<<st.top().second;
	}
	
	return 0;
}
