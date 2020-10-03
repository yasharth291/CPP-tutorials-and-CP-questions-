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
		int c, r;
		cin>>c>>r;
		int z=0, a, b;
		if(c<=9 && r<=9)
		{
			a=1, b=1;
		}
		else
		{
			(c%9==0)?a=c/9:a=c/9+1;
			(r%9==0)?b=r/9:b=r/9+1;
		}
		z=min(a,b);
		z==b?cout<<"1"<<" "<<z<<endl:cout<<"0"<<" "<<z<<endl;
	}
 	return 0;
}

