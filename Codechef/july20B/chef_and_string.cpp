#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll arr[n];
		for(ll i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		ll sum=0;
		for(ll i=0; i<n-1; i++)
		{
			arr[i]>arr[i+1]?(sum=sum+(arr[i]-arr[i+1])-1):(sum=sum+(arr[i+1]-arr[i]-1));
		}
		cout<<sum<<endl;
	}
 	return 0;
}

