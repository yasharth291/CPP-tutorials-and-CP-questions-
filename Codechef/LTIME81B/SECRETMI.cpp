#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
template <typename X> ostream& operator << (ostream& x,const vector<X>& v){for(ll i=0;i<v.size();++i) x<<v[i]<<" ";return x;}
template <typename X> ostream& operator << (ostream& x,const set<X>& v){for(auto it:v) x<<it<<" ";return x;}
template <typename X, typename Y> ostream& operator << (ostream& x, const pair<X,Y>& v) {x<<v.ff<<" "<<v.ss;return x;}
template <typename T, typename S> ostream& operator << (ostream& os, const map<T, S>& v) { for (auto it : v) os << it.first << "=>" << it.second << endl; return os; }
struct pair_hash {inline std::size_t operator()(const std::pair<ll, ll> & v) const {return v.first*31+v.second;}};
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL)
#define pb push_back
#define fr first
#define sc second
#define prnt(m) for(auto it = m.begin() ; it != m.end() ; ++it){cout<<*it<<endl;}
#define tra(it,m) for(auto it=m.begin();it!=m.end();++it)
#define DBG(x) cout<<"# # #     "<<x<<'\n';
#define fri(i,s,n) for(long long i=s;i<n;i++)
#define mod 1000000007LL
#define mod2 998244353
#define vct2 vector<vector<ll>>
#define vct vector<ll>
#define pll pair<ll,ll>
#define rz(n) resize(n)
#define all(v) v.begin(),v.end()
#define mkp make_pair
#define arrin(a,n) for(ll i = 0; i < n ; i++){cin>>a[i];}
#define arrout(a,n) for(ll i = 0;i < n; i++){cout<<a[i]<<" ";}
#define ex(s) cout<<s<<endl,exit(0);
#define infy 2e18
#define five 100005;
#define six 1000005;
#define prllclock cerr<<"Time : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n";
//___________________________________________________________________________________________________________________
ll dp[202][10004];
ll graph[202][202];
ll dist[202][202];
ll b[10004];
ll l;
ll pref[10004];
ll get(ll i,ll j)
{
       return pref[j] - pref[i];
}
ll f(ll i,ll j)
{
       if(i > 200){
              return infy;
       }
       ll prev = j-i;
       ll curr = j;
       ll dis = get(j-i,j);
       if(j==l-1){
              //cout<<j-i<<endl;
              if(dis==dist[b[curr]][b[prev]]){

                     return dp[i][j] = 1;
              }
              else{
                     return infy;
              }
       }
       if(dp[i][j] != -1){
              return dp[i][j];
       }
       if(dis==dist[b[curr]][b[prev]]){
               dp[i][j] = min(1+f(1,j+1),f(i+1,j+1));
       }
       else{
               dp[i][j] = f(i+1,j+1);
       }
       return dp[i][j];
}
int main()
{
       ll t;
       cin>>t;
       while(t--)
       {
              memset(graph,mod,sizeof graph);
              ll n,m;
              cin>>n>>m>>l;
              arrin(b,l);
              fri(i,0,l){--b[i];}
              fri(i,0,m){
                     ll x,y,z;
                     cin>>x>>y>>z;
                     graph[x-1][y-1] = graph[y-1][x-1] = z;
              }
              fri(i,0,n){
                     fri(j,0,n){
                            dist[i][j] = graph[i][j];
                            if(i==j){
                                   dist[i][j] = 0;
                            }
                     }
              }
              fri(k,0,n)
              {
                     fri(i,0,n)
                     {
                            fri(j,0,n)
                            {
                                   if (dist[i][k] + dist[k][j] < dist[i][j]) dist[i][j] = dist[i][k] + dist[k][j];
                            }
                     }
              }
              pref[0] = 0;
              fri(i,1,l){
                     pref[i] = pref[i-1] + graph[b[i]][b[i-1]];
                     //cout<<pref[i]<<endl;
              }
              memset(dp,-1,sizeof dp);
              ll xx = f(1,1);
              if(xx==infy){
                     cout<<-1<<endl;
              }
              else{
                     cout<<xx+1<<endl;
              }
       }
}
