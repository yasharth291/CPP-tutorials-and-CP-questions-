#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
long long int sumPairs(long long int arr[],long long int n) ;
int main() {
	    long long int n,i,sum=0;
	    scanf("%lld",&n);
	    long long int a[n];
	    for(int i=0;i<n;i++)
	    {
	       scanf("%lld",&a[i]); 
	    }
	    std::sort(a,a+n);
	    sum=sumPairs(a,n);
	    printf("%lld\n",sum);
	    return 0;
}
long long int sumPairs(long long int a[],long long int n) 
{ 
    long long int sum1 = 0; 
    for (int i=n-1; i>=0; i--) 
        sum1 += i*a[i] - (n-1-i)*a[i]; 
    return sum1; 
} 
