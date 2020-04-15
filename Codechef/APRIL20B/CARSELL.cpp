#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define MAX 10000005
#define MYFOR(i,a,b) for (int i = (a); i != (b); i = (a)<(b)? i+1 : i-1)
#define MX 1000000007
int main() 
{
	ll test,sum = 0,num,i;
	cin>>test;
	while(test--)
	{
	    cin>>num;
	    ll arr[num];
	    MYFOR(i, 0, num)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+num);
	    MYFOR(i, 0, num)
	    {
	        int h = i+1;
	        if(arr[num-h]%MX-h+1>=0)
	            sum = (sum + (arr[num-h]-h+1))%MX;
	        
	    }
	    cout<<sum<<endl;
	    sum = 0;
	}
	return 0;
}
