#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define MAX 10000005
#define MYFOR(i,a,b) for (int i = (a); i != (b); i = (a)<(b)? i+1 : i-1)
#define MX 1000000007
int main() 
{
	ll test,factor,factors_of_factor,prime_factor,i;
	cin>>test;
	while(test--)
	{
	    factors_of_factor = 0;
	    cin>>factor>>prime_factor;
	    while (factor%2 == 0)
        {
            factors_of_factor++;
            factor/=2;
        }
        for (i = 3; i <= sqrt(factor); i = i+2)
        {
            while (factor%i == 0)
            {
                factors_of_factor++;
                factor/=i;
            }
        }
        if (factor > 2)
        {
            factors_of_factor++;
        }
	    if(factors_of_factor<prime_factor)
	    {
	        cout<<"0"<<endl;
	    }
	    else
	    {
	        cout<<"1"<<endl;
	    }
	    
	}
	return 0;
}
