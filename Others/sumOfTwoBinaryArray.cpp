#include <iostream>
using namespace std;

#define N 5

int main()
{
    int arr1[N]={0,1,1,0,1} , arr2[N]={1,1,1,0,0} , sumArray[N+1]={0};
    int carry = 0;

    for(int i= N-1 ; i >= 0 ; --i )
    {
        sumArray[i+1] = arr1[i] ^ arr2[i] ^ carry;

        if(arr1[i] + arr2[i] + carry >=2)
            carry=1;
        else
            carry=0;
    }

    sumArray[0] = carry;

    for(int i=0 ; i < N +1 ; ++i)
        cout<<sumArray[i]<<" ";

    return 0;
}
