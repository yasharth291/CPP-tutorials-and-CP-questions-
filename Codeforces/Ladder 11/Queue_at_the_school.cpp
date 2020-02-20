#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,t;
    char a[100];
    cin>>n>>t;
    cin>>a;
    for(int i = 0;i<t;i++)
    {
        for(int j  = 0;j<n;j++)
        {
            if((a[j]=='B')&&(a[j+1]=='G'))
            {
                a[j]='G';
                a[j+1]='B';
                j++;
            }
        }
    }
    cout<<a;
    return 0;
}
