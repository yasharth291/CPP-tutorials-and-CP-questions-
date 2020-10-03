#include<iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		int x=1;
		cin>>n;
		long long int z;
		z=n;
		long long int arr[n][n];
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				arr[i][j]=x;
				x++;
			}
		}
		if(n%2==0)
		{
			for(int i=1; i<n; i+=1)
			{
			for(int j=0; j<n/2; j++)
			{
				if(i%2!=0)
				{
					int temp=arr[i][j];
					arr[i][j]=arr[i][z-j-1];
					arr[i][z-j-1]=temp;
				}
			}
		
			}
		}
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				cout<<arr[i][j]<<" ";
				
			}
			cout<<endl;
		}
		
	}
}