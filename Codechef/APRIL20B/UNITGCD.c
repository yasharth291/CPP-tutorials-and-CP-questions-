#include <stdio.h>
#define ll long long 
int main(void) {
	ll test,num,i;
	scanf("%lld",&test);
	while(test--)
	{
	    scanf("%lld",&num);
	    if(num==1)
	    {
	        printf("1\n");
	        printf("1 1\n");
	    }
	    else if(num==2)
	    {
	        printf("1\n");
	        printf("2 1 2\n");
	    }
	    else
	    {
	        printf("%lld\n",num/2);
	        printf("3 1 2 3\n");
	        if(num%2!=0)
	        {
	            for(i = 4;i<=num-2;i+=2)
	            {
	                printf("2 %lld %lld\n",i+1,i);
	            }
	            printf("2 %lld %lld\n",i+1,i);
	        }
	        else
	        {
	            for(i = 4;i<=num-2;i+=2)
	            {
	                printf("2 %lld %lld\n",i+1,i);
	            }
	            printf("1 %lld\n",i);
	        }
	        
	    }
	}
	
	return 0;
}
