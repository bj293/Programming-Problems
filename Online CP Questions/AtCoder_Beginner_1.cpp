/* Problem name: C - Snack
   Atcoder Beginner Contest
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b;
	cin>>a>>b;
	int x=a,y=b;
	
	while(x!=y)
	if(x>y)
	x=x-y;
	else y=y-x;
	
	cout<<a*b/x<<endl;
	return 0;
}
