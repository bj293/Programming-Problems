/* Problem name: B - Strings with the Same Length
   Atcoder Beginner Contest
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a,b,c;
	int n,j=0;
	cin>>n;
	cin>>a>>b;
	
	
	
	for(int i=0;i<n;++i)
	{
		c.insert(j++,1,a[i]);
		c.insert(j++,1,b[i]);
	}
	
	cout<<endl<<c<<endl;
	
	return 0;
}
