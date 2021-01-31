#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,T; 
	cin>>T;
	for(int i=1;i<=T;++i)
	{
		cout<<endl;
		cin>>a>>b>>c>>d;
		cout<<endl;
		for(int j=1;j<=1+b*(d+1);++j)
		cout<<"*";
		if(a>1)
		for(int j=1;j<=a;++j)
		{
		
			for(int k=1;k<=c;++k)
			{
					cout<<endl;
				cout<<"*";
				for(int l=1;l<=b;++l)
				{
					
					for(int m=1;m<=d;++m)
					cout<<".";
					cout<<"*";
				}
			}
			cout<<endl;
			for(int j=1;j<=1+b*(d+1);++j)
		    cout<<"*";
		}
	}
	return 0;
}