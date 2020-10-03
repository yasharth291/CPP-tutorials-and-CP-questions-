#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n, f=0;
		ll pt1=0, pt2=0;
		cin>>n;
		for(ll i=0; i<n; i++)
		{
			ll a, b;
			cin>>a>>b;
			ll sum1=0, sum2=0;
			
			while(a>0)
			{
				ll m=a%10;
				sum1=sum1+m;
				a=a/10;	
			} 
			while(b>0)
			{
				ll m=b%10;
				sum2=sum2+m;
				b=b/10;
			}
			if(sum1==sum2)
			{
				pt1++;
				pt2++;
			}
			else
			(sum1>sum2)?pt1++:pt2++;	
		}
		((pt1==pt2)?f=2:((pt1>pt2)?f=0:f=1));
		(pt1!=pt2)?cout<<f<<" "<<max(pt1, pt2)<<endl:cout<<f<<" "<<pt2<<endl;
	}
 	return 0;
}

