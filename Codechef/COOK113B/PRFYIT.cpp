#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int solve(string s,int n)
{
    int a[10000]={0};
    for(int i=0;i<n;i++)
    {
        a[i+1]=a[i];
        if(s[i]=='1')
        {
            a[i+1]++;
            
        }
        
    }
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<=n;j++)
        {
                mx=max(mx,(a[j]-a[i])+(i-a[i])+(n-j-(a[n]-a[j])));
                mx=max(mx,a[i]+(a[n]-a[j])+(j-i-(a[j]-a[i])));
                
        }
    }
    
    return (n-mx);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        int n=s.length();
        int ans=solve(s,n);
        cout<<ans<<"\n";
    }
}
