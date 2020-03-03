#include<iostream>
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define pb(x) push_back(x)
#define gcd(a,b) __gcd(a,b)
#define all(v) v.begin(),v.end()
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int solve(vector<int>a ,int size)
{
	int max_so_far = INT_MIN, max_ending_here = 0; 
 
    for (int i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
 
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    return max_so_far; 
}
int32_t main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int>v(n);
		vector<int>v1(n);
		map<int,int>mp;
		int res = 0;
		for(int i = 0 ; i < n ; i++ ){
			cin >> v[i];
			res = res^v[i];
		}
		 for(int i = 0 ; i < n ; i++){
		   	cin >> v1[i];
		   	res = res ^ v1[i];
		   	mp[v1[i]]++;
		}
		bool ok = false;
	   for(int i = 0 ; i < n; i++ ){
	   		if(mp[res^v[i]]>=0){
		   		mp[res ^ v[i]]--;
	   			v1[i] = res^v[i];
	   		}
			else{
		   		cout << "-1";
		   		ok = true;
	   			break;
	   		}
	   }
	   if(ok==false){
	   	for(int i = 0 ;i < n ; i++){
	   		cout << v1[i] <<" ";
		}
	   }
	   cout<<'\n';
	}
}
