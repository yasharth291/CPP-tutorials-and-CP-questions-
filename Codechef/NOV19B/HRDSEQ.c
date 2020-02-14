#include <stdio.h>
int main() 
{
    int a[1000];
    int t,n,i,j,count=0;
    scanf("%d",&t);
    a[0]=0;
    a[1]=0;
    for(i=2;i<128;i++)
    {
        for(j=i-2;j>=0;j--)
        {
            if(a[i-1]==a[j])
            {
                    a[i]=i-j;
                    break;
            }
        }
    }
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            if(a[n-1]==a[i])
            {
                count++;
            }
        }
        printf("%d\n",count);
        count=0;
    }
	return 0;
	
}

