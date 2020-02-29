#include <iostream>
using namespace std;

int main() {
	    long long int t,n,k;
	    char a[1000];
	    cin>>t;
	    while(t--)
	    {
	        cin>>n>>k;
	        for(long long int i = 0;i<n;i++)
	        {
	            cin>>a[i];
	        }
	        for(long long int i = 0;i<k;i++)
	        {
	            if(a[n-1]=='H')
	            {
	                for(long long int j = 0;j<n;j++)
	                {
	                    if(a[j]=='H')
	                    {
	                        a[j]='T';
	                    }
	                    else if(a[j]=='T')
	                    {
	                        a[j]='H';
	                    }
	                }
	                
	            }
	                n = n-1;
	        }
	        int count = 0;
	        for(long long int i = 0;i<n;i++)
	        {
	            if(a[i]=='H')
	            {
	                count++;
	            }
	        }
	        cout<<count<<endl;
	    }
	    return 0;
}
