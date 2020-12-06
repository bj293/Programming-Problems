/* Problem: CodeChef Nov Long 19
             HRDSEQ
*/
#include <iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	
	int a[128]={0};
	for(int i=1;i<128;++i)
	{
		int c=0,last=a[i-1];
		for(int j=i-2;j>=0;--j)
		if(a[j]==last)
		{++c;
		break;
		}
		if(c==0)
		{
			a[i]=0;
			continue;
		}
		else {
			int val=1;
			for(int j=i-2;a[j]!=last;--j)
			++val;
			a[i]=val;
		}
}
	for(int l=1;l<=T;++l)
	{
		int N;
		cin>>N;
		
		int key=a[N-1],count=0;
		for(int i=0;i<N;++i)
		{
			if(a[i]==key)
			++count;
		}
		cout<<count<<endl;
		
	}
	
	
	return 0;
}
