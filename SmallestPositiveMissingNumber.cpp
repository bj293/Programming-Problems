#include <stdio.h>

int main() {
	//code
	
	int q;
	scanf("%d",&q);
	
	while(q--){
	int n;
	scanf("%d",&n);
	
	int arr[10000],hash_arr[10000] = {0};
	for(int i=0;i<n;++i)
	    scanf("%d",(arr+i));
	    
	for(int i=0;i<n;++i)
	    if(arr[i]>0)
	        hash_arr[arr[i]] = 1;
	
	for(int i=1;i<n;++i)
	    if(!hash_arr[i])
	    {
	        printf("%d\n",i);
	        break;
	    }
	
	}        
	return 0;
}
