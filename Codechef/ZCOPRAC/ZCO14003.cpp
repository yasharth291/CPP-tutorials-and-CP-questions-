#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int maxi,n,i;
	scanf("%lld",&n);
	    long long int a[n];
	    for(int i=0;i<n;i++)
	    {
	       scanf("%lld",&a[i]); 
	    }
	    sort(a,a+n);
	    maxi=a[0]*n;
	    for(i=1;i<n;i++)
	    {
	        maxi=max(maxi,(a[i]*(n-i)));
	    }
	    printf("%lld\n",maxi);
	
	return 0;
}
