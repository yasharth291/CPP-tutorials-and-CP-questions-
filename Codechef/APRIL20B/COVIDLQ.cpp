#include <iostream>
using namespace std;
#define ll long long
long long int MAX = 10000000;
int main() 
{
	ll test,num,start,flag = 0,end,i;
	cin>>test;
	while(test--)
	{
	    cin>>num;
	    flag = 0;
	    ll arr[num];
	    for(i = 0;i < num;i++)
	    {
	        cin>>arr[i];
	        if((arr[i] == 1)&&(flag == 0))
	        {
	            start = i;
	            flag = 1;
	        }
	        if(arr[i]==1)
	        {
	            end = i;
	        }
	    }
	    ll count = 0;
	    int h = start +1;
	    for( i = h;i<end+1;i++)
	    {
	        if(arr[i]==0)
	        {
	            count++;
	        }
	        if(arr[i] == 1)
	        {
	            if(count<=4)
	            {
	                cout<<"NO"<<endl;
	                flag = 0;
	                break;
	            }
	            else 
	            {
	                count = 0;
	            }
	        }
	    }
	    if(flag == 1)
	    {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
