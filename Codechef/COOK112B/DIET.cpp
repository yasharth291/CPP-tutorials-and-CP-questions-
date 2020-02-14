#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	    long long int n,t,i,sum=0,k,flag=0,a[10000000];
	    scanf("%lld",&t);
	    while(t--)
	    {
	        scanf("%lld",&n);
	        scanf("%lld",&k);
	        for(i=1;i<=n;i++)
	        {
	            scanf("%lld",&a[i]);
	            
	        }
	        for(i=1;i<=n;i++)
	        {
	            sum = a[i] + sum;
	            sum = sum - k;
	            if(sum<0)
	            {
	                flag = 1;
	                break;
	            }
	        }
	        if(flag == 1)
	        {
	            printf("NO %lld\n",i);
	        }
	        else
	        {
	            printf("YES\n");
	        }
	        sum=0;
	        flag=0;
	    }
	    	    return 0;
}
