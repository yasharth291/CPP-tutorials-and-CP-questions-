#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n, k, f=0;
	    cin>>n;
	    long long int arr[n];
	    long long int sum5=0,sum10=0;
	    for(int i=0; i<n; i++)
		{
	   	    cin>>arr[i];
	   	}
	   	for(int i=0; i<n; i++)
	   	{
	   		
	   		if(arr[0]>5)
	   	    {
	   	    	f=1;
	   	    	break;
			}
			 
			 else if(arr[i]==5)
			{
				sum5++;
			  continue;
			}
			 else
			 {
			 	k=arr[i]-5;
			 	if(k==5)
			 	{
			 		if(sum5>=1){
			 			sum5--;
			 			sum10++;
			 			continue;
					 }
					 else{
					 	f=1;
					 	break;
					 }
				}
				else{
					if(sum10>=1){
						sum10--;
						continue;
					}
					else if(sum5>=2){
						sum5-=2;
						continue;
					}
					else{
						f=1;
					 	break;
					}
				}
			 }
	   	}
	   	(f==1)?cout<<"NO"<<endl:cout<<"YES"<<endl;
	}
}