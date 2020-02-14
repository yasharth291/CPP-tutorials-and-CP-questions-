#include<iostream>
using namespace std;
int main()
{
    int a1,c1 = 0,b1 = 0,n1,t1,fact1 = 1,sum1 = 0;
    cin>>t1;
    while(t1--)
    {
        cin>>n1;
        while(n1--)
        {
            cin>>a1;
            if(a1==0)
            {
                c1++;
            }
            else if(a1==2)
            {
                b1++;
            }
        }
        for(int i1 = c1;i1>(c1-2);i1--)
        {
            fact1 = fact1 * i1;
        }
        fact1 = fact1/2;
        sum1 = sum1 + fact1;
        fact1 = 1;
        for(int i1 = b1;i1>(b1-2);i1--)
        {
            fact1 = fact1 * i1;
        }
        fact1 = fact1/2;
        sum1 = sum1 + fact1;
        printf("%d\n",sum1);
        sum1 = 0;
        c1 = 0;
        b1 = 0;
        fact1 = 1;
    }
    return 0;
}
