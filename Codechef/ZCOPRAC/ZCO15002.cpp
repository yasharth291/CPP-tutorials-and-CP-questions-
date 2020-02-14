#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	    long long int count=0,k,n,j,i;
	    scanf("%lld",&n);
	    scanf("%lld",&k);
	    long long int a[n];
	    for(int i=0;i<n;i++)
	    {
	       scanf("%lld",&a[i]); 
	    }
	    std::sort(a,a+n);
	    for(i=0;i<n;i++)
    	{
	         for(j=i+1;j<n;j++)
	             if(a[j]-a[i]>=k)
	             {
	                 count+=(n-j);
	                 break;
	             }
	        if(j==n)
	        break;
    	}
	    printf("%lld\n",count);
	    return 0;
}
