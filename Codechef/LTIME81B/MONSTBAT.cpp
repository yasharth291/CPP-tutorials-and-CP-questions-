#include <bits/stdc++.h>

using namespace std;

typedef long long int LL;

const int N = 1e5 + 7;

int n[2];
int last[2];

char tmp[N];
int in_val[N];

LL in_diff;
LL dp[N][2];
LL val[N][2];

multiset <int> def[2];
vector <int> att[2];

void read(int t){
	last[t] = 0;
	for(int i = 1; i <= n[t]; ++i)
		scanf("%d", &in_val[i]);
	scanf("%s", tmp + 1);
	
	def[t].clear();
	att[t].clear();

	for(int i = 1; i <= n[t]; ++i)
		if(tmp[i] == 'D')
			def[t].insert(in_val[i]);
		else
			att[t].push_back(in_val[i]);
	
	for(int i = 1; i <= n[t]; ++i)
		if(t)
			in_diff -= in_val[i];
		else
			in_diff += in_val[i];
	
	sort(att[t].begin(), att[t].end());
	reverse(att[t].begin(), att[t].end());
}

void solve(){
	scanf("%d %d", &n[0], &n[1]);
	in_diff = 0;

	read(0);
	read(1);

	int t = 0;
	while(true){
		val[++last[t]][t] = in_diff;
		if(att[t].size() == 0 || def[t ^ 1].size() == 0)
			break;
		
		in_diff += *def[t ^ 1].rbegin();
		def[t ^ 1].erase(--def[t ^ 1].end());
		
		def[t].insert(att[t].back());
		att[t].pop_back();
		
		in_diff *= -1;
		t ^= 1;
	}

	if(t == 0 && last[t] == 1){
		printf("%lld\n", in_diff);
		return;
	}

	dp[last[t]][t] = val[last[t]][t];
	last[t]--;
	t ^= 1;
	
	while(last[t] > 0){
//		printf("%d %d\n", last[t], t);fflush(stdout);
		dp[last[t]][t] = max(-dp[last[t ^ 1] + 1][t ^ 1], val[last[t]][t]);
		last[t]--;
		t ^= 1;
	}
	
	printf("%lld\n", dp[1][0]);
}

int main(){
	int cases;
	scanf("%d", &cases);
	
	while(cases--)
		solve();
	return 0;
}
