#include<iostream>
#include<string>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long count=0;
		string str;
		cin>>str;
		for(int i=0; i<(str.length()-1); i++)
		{
			if((str[i]=='x' && str[i+1]=='y')|| (str[i]=='y'&&str[i+1]=='x'))
			{
				count++;
				i++;
			}
		}
		cout<<count<<endl;
	}
}