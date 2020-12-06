/* Problem name: D - Brick Break
   Atcoder Beginner Contest
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n;
	vector<int>v;
	
	for(int i=0;i<n;++i)
	{
		cin>>x;
		v.push_back(x);
	}
	int j=1,c=0;
	for(int i=0;i<n;++i){
		if(v[i]==j)
		{
			++j;
			++c;
		}
	}
	if(c==0)
	cout<<-1<<endl;
	else cout<<n-c<<endl;
	
	return 0;
	
}
