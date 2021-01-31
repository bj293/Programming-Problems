#include <stdio.h>

int main(void) {
	// your code here
	int i,j,T,m,n,k;
	scanf("%d",&T);
	for(i=1;i<=T;++i)
	{
		printf("\n");
		scanf("%d %d",&m,&n);
		for(j=m;j<=n;++j)
        {
	      if(j==1)
        	continue;
        	int c=0;
          for(k=2;(k*k)<=j;++k)
	   {
	    	if(j%k==0)
		   {
			++c;
			break;
		   }
	   }
          	if(c==0)
        	printf("\n%d",j);
	
       }
	}

	return 0;
}