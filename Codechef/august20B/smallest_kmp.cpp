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
		string s;
	
		string str, p;
		cin>>str>>p;
		if(str.length()==p.length())
		cout<<p<<endl;
		else
		{
			string s;
			map<char, int> mp;
			for(int i=0; str[i]; i++)
			{
				mp[str[i]]++;
			}
			for(int i=0; p[i];i++)
			{
				mp[p[i]]--;
			}	
			for(auto it:mp)
			{
				while(it.second!=0)
				{
					s+=it.first;
					it.second--;
				}
			}
		//	cout<<s<<endl;
			if(s[s.length()-1]<p[0])
			{
				cout<<s<<p<<endl;
			}
			else if(s[0]>p[0])
				cout<<p<<s<<endl;
			else 
			{
				
				for(int i=0; s[i]; i++)
				{
					if(s[i]<p[0] && s[i+1]>p[0])
					cout<<s[i]<<p;
					else if(s[i]<p[0] || s[i]>p[0])
					cout<<s[i];
					else if(s[i]==p[0])
					{
						int f=0;
						for(int j=0; p[j]; j++)
						{
							if(s[i]==p[i])
							f=1;
							if(s[i]>p[j])
							{
								cout<<p;
								int d=i;
								while(mp[s[d]]>0)
								{
									cout<<s[d];
									mp[s[d]]--;
									i++;
								}
								i--;
								f=0;
								break;
							}
							else if(s[i]<p[j])
							{
								int d=i;
								while(mp[s[d]]>0)
								{
									cout<<s[d];
									mp[s[d]]--;
									i++;
								}
								i--;
								cout<<p;
								f=0;
								break;
							}
						}
					if(f==1)
					{
						int d=i;
						while(mp[s[d]]>0)
						{
							cout<<s[d];
							mp[s[d]]--;
							i++;
						}
						i--;
						cout<<p;
					}
					}
				}
			}
		}
			cout<<endl;
	}
	
 	return 0;
}

