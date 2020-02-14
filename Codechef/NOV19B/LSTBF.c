#include <stdio.h>
int main() 
{
    long long int t,n,i,j,k,m[1000000],p[10000],c,s;
    double r;
    scanf("%lld",&t);
    while(t--)
    {
     scanf("%lld",&n);
     for(i=0;i<n;i++)
     {
        m[i]=1;
        if(i<1000)
        p[i]=1;
     }
     m[n-1]=p[0]=0;
     s=n-1;
     while(1)
     {
         c=0;
         m[n-1]++;
         for(j=(n-1);j>=0;j--)
         {
             m[j]=m[j]+c;
             c=m[j]/10;
             m[j]=m[j]%10;
             for(k=j;((k<n)&&(m[j]!=0));k++)
             {
                 m[k]=m[j];
             }
             if(c==0)
             break;
         }
         if(c!=0)
         {
             break;
         }
         for(i=j;i<n;i++)
         {
             s=s-(p[n-1-i]*p[n-1-i])+(m[i]*m[i]);
             p[n-1-i]=m[i];
         }
         r=sqrt(s);
         if(((int)r)==r)
         break;
     }
        if(c!=0)
        printf("-1");
        else
        for(i=0;i<n;i++)
        {
            printf("%lld",m[i]);
        }
            printf("\n");
    }
	return 0;
	
}

