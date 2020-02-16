#include<stdio.h>
int main()
{
    long long int t1,n1,netinc1=0,tax1;
    scanf("%lld",&t1);
    while(t1--)
    {
        scanf("%lld",&n1);
        if(n1<=250000)
        {
            tax1=0;
           
        }
        else if(n1>=250001&&n1<= 500000)
        {
            tax1=0.05*(n1-250000);
        }
        else if(n1>= 500001&&n1<= 750000)
        {
            tax1=0.1*(n1-500000)+0.05*250000;
        }
         else if(n1>= 750001&&n1<=  1000000)
        {
            tax1=0.15*(n1-750000)+0.15*(250000);
        }
          else if(n1>=1000001 &&n1<= 1250000)
        {
            tax1=0.20*(n1-1000000)+0.30*(250000);
        }
          else if(n1>= 1250001&&n1<= 1500000)
        {
            tax1=0.25*(n1-1250000)+0.5*250000;
        }
        else
          tax1=0.3*(n1-1500000)+0.75*250000;
          netinc1=n1-tax1;
         printf("%lld\n",netinc1);      
    }
}
