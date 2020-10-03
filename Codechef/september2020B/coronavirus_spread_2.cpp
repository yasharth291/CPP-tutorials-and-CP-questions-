#include<bits/stdc++.h>
#include<set>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define input_txt() freopen("input.txt", "r", stdin);
#define output_txt() freopen("output.txt", "w", stdout);
#define vec vector
#define lli long long int
#define test_lli ll t; cin>>t; while(t--)
#define test_int int t; cin>>t; while(t--)
#define ll long long
#define pb push_back
#define um unordered_map
#define umi unordered_map<int, int>
#define vi vec<int>
#define vc vec<char>
#define vll vec<lli>
#define m_p make_pair
const int mod=1000000007;

using namespace std;

/*

bool isPrime(int x)
{
	 if(x==1)
	 return false;
	 for(int i=2; i*i<=n; i++)
	 {
	  	if(x%i==0)
	  	{
			return false;
		}
	 }
	 return true;
}

*/

int main()
{
	IOS
//	input_txt()
//	output_txt()
	test_int
	{
		int n;
		cin>>n;
		int arr[n];
		umi mp;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			mp[arr[i]]++;
		}
		if(mp.size()==1)
		cout<<1<<" "<<1<<endl;
		else
		{
			//BEST CASE
			
			int count1=1, count2=1;
			for(int i=n-2; i>=0; i--)
			{
				if(arr[i]>arr[n-1])
				count1++;
			}
			for(int i=1; i<n; i++)
			{
				if(arr[0]>arr[i])
				count2++;
			}
			int a=min(count1, count2);
			
			// WORST CASE
			int count=1;
			vi a1, a2;
			for(int i=0; i<n-1; i++)
			{
				for(int j=i+1; j<n; j++)
				{
					if(arr[i]>arr[j])
					count++;
				}
				a1.pb(count);
				count=1;
			}
			a1.pb(1);
			count=1;
			for(int i=n-1; i>0; i--)
			{
				for(int j=i-1; j>=0; j--)
				{
					if(arr[i]<arr[j])
					count++;			
				}	
				a2.pb(count);
				count=1;		
			}
			int b=max(*max_element(a1.begin(), a1.end()), *max_element(a2.begin(), a2.end()));
			
			cout<<a<<" "<<b<<endl;
		}
	}
	

	return 0;
}

