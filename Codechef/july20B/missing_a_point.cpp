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
		int n;
		cin>>n;
		vector<int> arr, brr;
		unordered_map<int, int> mp1, mp2;
		for(int i=0; i<4*n-1; i++)
		{
			int a, b;
			cin>>a>>b;
			arr.push_back(a);
			brr.push_back(b);
			mp1[arr[i]]++;
			mp2[brr[i]]++;
		}
		int x, y;
		for(auto p: mp1)
		{
			if(p.second%2!=0)
			{
				x=p.first;
				break;
			}
		}
		for(auto q: mp2)
		{
			if(q.second%2!=0)
			{
				y=q.first;
				break;
			}
		}
		cout<<x<<" "<<y<<endl;
	}
 	return 0;
}

