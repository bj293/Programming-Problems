/*
    Problem: CodeChef June Long 2020
            EOEO

    Problem Link : https://www.codechef.com/JUNE20B/problems/EOEO
*/


#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--)
	{
	long long t;
	cin>>t;
	long long tot=0;
	while(t%2!=1)
	  t/=2;

	tot=t/2;
	
	cout<<tot<<endl;
	}
	return 0;
}
