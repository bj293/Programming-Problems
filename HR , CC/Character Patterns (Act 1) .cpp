#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int m,n,temp=-1,T;
	cin>>T;

	for(int i=1;i<=T;++i)
	{   
		cout<<endl;
		cin>>m>>n;
		for(int j=1;j<=m;++j)
		{ 
		    temp=j+1;
			cout<<endl;
			for(int k=1;k<=n;++k)
			{
				if((++temp)%2==0)
				{
					cout<<".";
				}
				else cout<<"*";
			}
			
		}
	}

	return 0;
}