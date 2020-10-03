#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n, k;
		long long int sum=0, sum1=0;
	    cin>>n>>k;
	    long long int arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	        sum +=arr[i];
	    }
	    for(int i=0; i<n; i++)
	    {
	        if(arr[i]>k)
	        {
	            arr[i]=k;
	        }
	        sum1 += arr[i];
	    }
	    
	    cout<<sum-sum1<<endl;
	    
	}
	return 0;
}
