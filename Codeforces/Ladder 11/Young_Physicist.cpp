#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][3];
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    int flag = 0;
    for(int i = 0;i<3;i++)
    {
        int sum = 0;
        for(int j = 0;j<n;j++)
        {
            sum = sum + a[j][i];
        }
        if(sum!=0)
        {
            cout<<"NO"<<endl;
            flag = 1;
            break;
        }
       
    }
     if(flag!=1)
        {
            cout<<"YES"<<endl;
        }
    return 0;
}
