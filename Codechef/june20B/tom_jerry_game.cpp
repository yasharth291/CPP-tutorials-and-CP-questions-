#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	long long int z;
	cin>>t;
	while(t--)
	{
		long long int count=0;
		long long int ts;
		cin>>ts;
		
		z=ts;
		while(z%2==0)
		{
			z=z/2;
		}
		//cout<<z;
		for(int i=2; i<z; i+=2)
		{
			count++;
		}
		cout<<count<<endl;
	}
}