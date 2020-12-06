#include <iostream>
using namespace std;

int main(void) {
	// your code here
 
 int T;
	cin>>T;
	for(int c=1;c<=T;++c)
	{
			char str[400],stack[200];
			cout<<endl;
			cin>>str;
	    	cout<<endl;
			int top=-1,i=-1;
		while(str[++i]!='\0')
		{
			if(str[i]>='a'&&str[i]<='z')
			{
				cout<<str[i];
			}
			else if(str[i]=='('||str[i]=='*'||str[i]=='^'||str[i]=='/')
			{
				stack[++top]=str[i];
				
			}
			else if(str[i]=='+'||str[i]=='-')
			{
				if(top!=-1 &&stack[top]!='+'&&stack[top]!='-'&&stack[top]!='(')
				{
					cout<<stack[top];
					stack[top]=str[i];
				}
				else stack[++top]=str[i];
				
			}
			else
			{
				while(stack[top]!='(')
				{
					cout<<stack[top--];
				}
				--top;
			}
		
		}
			
while(top!=-1)
{
	cout<<stack[top--];
}

}

	return 0;
}