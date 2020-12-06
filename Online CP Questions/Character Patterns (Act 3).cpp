#include <iostream>
using namespace std;
int main()
{
	int m,n,T; 
	cin>>T;
	for(int i=1;i<=T;++i)
	{
		cout<<endl;
		cin>>m>>n;
		cout<<endl;
		for(int j=1;j<=3*n+1;++j)
		cout<<"*";
		cout<<endl;
		for(int j=1;j<=m;++j)
		{
			
			for(int l=1;l<=2;++l)
			{
				cout<<"*";
			for(int k=1;k<=n;++k)
			cout<<"..*";
			cout<<endl;
		}
		for(int j=1;j<=3*n+1;++j)
		cout<<"*";
		cout<<endl;
		}
	}
	return 0;
}