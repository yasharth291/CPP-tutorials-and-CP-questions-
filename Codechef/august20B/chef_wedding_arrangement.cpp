#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);


	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		vector<int> arr;
		vector<int>::iterator it;
		unordered_map<int, int> mp;
		int count=0, z=0;
		while(z<n)
		{
			if(arr.size()==0)
			{
				int v;
				cin>>v;
				mp[v]++;
				arr.push_back(v);
				z++;
			}
			else
			{
				int s;
				cin>>s;
				mp[s]++;
				it=find(arr.begin(), arr.end(), s);
				if(it!=arr.end())
				{
					count++;
					arr.clear();
					arr.push_back(s);
					z++;
				}
				else
				{
					arr.push_back(s);
					z++;
					
				}
			}
		}
		int s=0;
		for(auto& x:mp)
		{
			if(x.second>1)
			s+=x.second;
		}
		int mini=min(k+s, k*(count+1));
		cout<<mini<<endl;
	}
	
	
 	return 0;
}





/*




///////     //\       ///\    |||     ///////     ////    ///   |||||||||   ||||||||||    ///\
////       // \\	  /// \\  |||    //          ////    ///       ||          ||        //  \\
    ///   ///\\\\     ///  \\|||    //          ////||||///        ||          ||       ////\\\\
/////    /       \    ///   \\\|    ////////   ////    ///      ||||||||       ||      //       \





*/

