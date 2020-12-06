#include <bits/stdc++.h>
using namespace std;

int main()
{
	int sum=0;
	char s[5];
	cin>>s;
	int len=strlen(s)-1;
	
	for(int i=0;i<=len;++i)
	{
		sum+=(s[i]-'@');
	}
	cout<<sum;
	return 0;
}


