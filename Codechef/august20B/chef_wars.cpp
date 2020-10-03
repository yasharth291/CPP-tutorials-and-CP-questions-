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
		int p, h;
		cin>>h>>p;
		int f;
		while(1)
		{
			if((h<p) || (h==1 && p==1))
			{
				f=1;
				break;	
			}
			else if(p==0)
			{
				f=0;
				break;
			}
			else
			{
				h=h-p;
				p=p/2;	
			}
		}
		cout<<f<<endl;
	}
 	return 0;
}

