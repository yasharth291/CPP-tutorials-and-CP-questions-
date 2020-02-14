#include <stdio.h>
#include<math.h>
int main() 
{
    long long int a[5000],b[5000],c[5000],d[5000],e[5000],f[5000];
    long long int t,n,m,k,x,y,i,j,l;
    double d1,d2,min=10000000000.0,ds1,ds2;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&x,&y);
        scanf("%lld",&n);
        scanf("%lld",&m);
        scanf("%lld",&k);
        for(i=0;i<n;i++)
        {
            scanf("%lld %lld",&a[i],&b[i]);
        }
        for(i=0;i<m;i++)
        {
            scanf("%lld %lld",&c[i],&d[i]);
        }
        
        for(i=0;i<k;i++)
        {
            scanf("%lld %lld",&e[i],&f[i]);
        }
            for(j=0;j<m;j++)
            {
                for(l=0;l<n;l++)
                {
                ds1=(sqrt(((x-a[l])*(x-a[l]))+((y-b[l])*(y-b[l]))))+(sqrt(((a[l]-c[j])*(a[l]-c[j]))+((b[l]-d[j])*(b[l]-d[j]))));
                ds2=(sqrt(((x-c[j])*(x-c[j]))+((y-d[j])*(y-d[j]))))+(sqrt(((a[l]-c[j])*(a[l]-c[j]))+((b[l]-d[j])*(b[l]-d[j]))));
                    if((min<ds1)&&(min<ds2))
                    {
                        continue;
                    }
                    for(i=0;i<k;i++)
                    {
                        d1=ds1+(sqrt(((c[j]-e[i])*(c[j]-e[i]))+((d[j]-f[i])*(d[j]-f[i]))));
                        d2=ds2+(sqrt(((a[l]-e[i])*(a[l]-e[i]))+((b[l]-f[i])*(b[l]-f[i]))));
                        if((d1<d2)&&(min>d1)) 
                        {
                            min=d1;
                        }
                        else if(d2<min)
                        {
                            min=d2;
                        }
                    }
                    
                }
            }
    
        
            printf("%0.10f\n",min);
            min=10000000000.0;
    }
    return 0;
}
