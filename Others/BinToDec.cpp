#include<bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n,i=0;
		cin>>n;
		int dec=0;
		while(n)
		{
			dec+=(n%10)*pow(2,i);
			n/=10;
			++i;
		}
		cout<<dec<<endl;
	}
	return 0;
}
