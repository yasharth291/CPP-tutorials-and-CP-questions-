#include <stdio.h>

int main() {
	long long int t,n,k,a[10000000],count= 0,max=0,flag  = 0;
	scanf("%lld",&t);
	while(t--)
	{
	    scanf("%lld%lld",&n,&k);
	    for(long long int i = 0;i<n;i++)
	    {
	        scanf("%lld",&a[i]);
	    }
	    count = 0;
	    max  = 0;
	    for(long long int j = 1;j<=k;j++)
	    {
	        count = 0;
	        flag = 0;
	        for(long long int i = 0;i<n;i++)
	        {
	             if(a[i]!=j)
	            {
	                 count++;
	            }
	            else
	            {
	                flag = 1;
	                if(max<=count)
	                {
	                    max = count;
	                    
	                }
	                count = 0;
	            }
	            
	            
	        }
	        if(max<=count)
	        {
	            max = count;
	        }
	        if(count == n)
	        {
	            max = n;
	            break;
	        }
	    }
	        
	        if(flag == 0)
	        {
	            printf("%lld\n",n);
	        }
	        else
	            printf("%lld\n",max);
	    
	}
	
	return 0;
}
