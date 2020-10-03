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
	int k; cin >> k;
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        string res(n, '0');
        vector<unsigned long long> num(n);
        
        unsigned long long tot_sum = 0;
        
        for(int i=1; i<=n; i++){
            num[i-1] = pow(i,k);
            tot_sum += num[i-1];
        }
        
        unsigned long long half_sum = tot_sum / 2;
        
        unsigned long long cur_sum = 0;

        for(int i=n-1; i>=0; i--){
            if(cur_sum + num[i] <= half_sum){
                cur_sum += num[i];
            }
            else res[i] = '1';
        }
        
        cout << tot_sum - cur_sum - cur_sum << endl;
        cout << res << endl;
    }

	return 0;
}

