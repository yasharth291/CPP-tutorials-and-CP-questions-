#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		int arr[n];
		int b=INT_MAX, z, f=0;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			if(arr[i]<=k && k%arr[i]==0 && k/arr[i]<=b)
			{
				z=arr[i];
				b=k/arr[i];
				f=1;
			}
		}
		f==1?cout<<z<<endl:cout<<"-1"<<endl;
	}
 	return 0;
}

