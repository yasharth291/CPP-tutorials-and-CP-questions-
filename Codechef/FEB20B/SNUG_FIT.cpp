#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, a[100000], b[100000], n, sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i = 0; i < n;i++)
        {
            cin>>a[i];
        }
        for(int i = 0; i < n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        for(int i = 0;i<n;i++)
        {
            if(a[i]<b[i])
            {
                sum = sum + a[i];
            }
            else
            {
                sum = sum + b[i];
            }
        }
        cout<<sum<<endl;
        sum = 0;
    }
    return 0;
}
