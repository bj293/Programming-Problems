#include <bits/stdc++.h>
using namespace std;
bool isPalindromicStringRec(string str,int s,int e)
{
	if(str[s]!=str[e])
	return false;
	else if(s>=e)
	return true;
	else return isPalindromicStringRec(str,s+1,e-1);
	
}
int main()
{
	string s;
	cin>>s;
	cout<<"  : Is this a palindromic string :"<<isPalindromicStringRec(s,0,s.length()-1);
	
	return 0;
}
