#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int k;
		cin>>k;
		char arr[8][8];
		long long int count=0, f=0, x, y;
		for(long long int i=0; i<8; i++)
		{
			for(long long int j=0; j<8; j++)
			{
				if(count<=k-1)
				{
					arr[i][j]='.';
					
				arr[0][0]='O';
				}
				else
				arr[i][j]='X';		
				count++;
			}
		}
		for(long long int i=0; i<8; i++)
		{
			for(long long int j=0; j<8; j++)
			cout<<arr[i][j];
			cout<<endl;
		}
	}
 	return 0;
}

