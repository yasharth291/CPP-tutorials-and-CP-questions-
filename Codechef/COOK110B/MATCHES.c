#include <stdio.h>
int main() 
{
    long long int a,b,t,sum,sum2=0;
    int rem;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&a,&b);
        sum = a+b;
        while(sum!=0)
        {
            rem = sum%10;
            sum = sum/10;
            if((rem==0)||(rem==6)||(rem==9))
            {
                sum2 = sum2+6;
            }
            else if(rem==1)
            {
                sum2=sum2+2;
            }
            else if((rem==2)||(rem==3)||(rem==5))
            {
                sum2=sum2+5;
            }
            else if(rem==4)
            {
                sum2=sum2+4;
            }
            else if(rem==8)
            {
                sum2=sum2+7;
            }
            else
            {
                sum2=sum2+3;
            }
        }
        printf("%lld\n",sum2);
        sum2=0;
    }
    return 0;
}


