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
	test_int{
		int n;
		cin>>n;
		int arr[n][n];
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				cin>>arr[i][j];
			}
		}
		int count=0;
		for(int i=1; i<n-1; i++)
		{
			if((arr[0][i]!=i+1 && arr[0][i+1]==i+2) || (arr[0][i]==i+1 && arr[0][i+1]!=i+2))
			{
				count++;
			}
		}
		if(arr[0][n-1]!=n)
		count++;
		cout<<count<<endl;
	}
	

	return 0;
}

