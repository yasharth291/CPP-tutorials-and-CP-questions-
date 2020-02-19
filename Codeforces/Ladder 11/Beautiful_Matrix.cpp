#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a[5][5],p,l;
    for(int i = 0;i<5;i++)
    {
        for(int j = 0;j<5;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i = 0;i<5;i++)
    {
        for(int j = 0;j<5;j++)
        {
            if(a[i][j]!=0)
            {
                p = i;
                l = j;
                break;
            }
        }
    }
    cout<<(abs(p-2)+abs(l - 2));
    return 0;
}
