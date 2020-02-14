#include <iostream>
using namespace std;

int main() 
{
	int t,n,a[9],sum,p,s;
	for(int i = 0;i<9;i++)
	a[i]=0;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    while(n--)
	    {
	        cin>>p;
	        cin>>s;
	        if((p<9)&&(p>0))
	        {
	            if(a[p]<s)
	            {
                    a[p]=s;	            
	            }
	        }
	    }
	    sum = a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8];
	    printf("%d\n",sum);
	    sum = 0;
	    for(int i = 0;i<9;i++)
	    {
	        a[i]=0;
	    }
	}
	return 0;
}
