#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int m,n,T;
	cin>>T;
	for(int i=1;i<=T;++i)
	{
		cout<<endl;
		cin>>m>>n;
		cout<<endl;
		for(int j=1;j<=n;++j)
		cout<<"*";
		for(int j=1;j<=m-2;++j)
		{
			cout<<endl<<"*";
			for(int k=2;k<=n-1;++k)
			cout<<".";
			if(n>1)
			cout<<"*";
		}
		if(m>1)
	{
		cout<<endl;
		for(int j=1;j<=n;++j)
		cout<<"*";
	}	
	}
	return 0;
}