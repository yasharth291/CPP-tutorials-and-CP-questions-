#include <stdio.h>
int main() 
{
    char a[100000],b[100000];
    int t,n,count=0,i,j;
    char l;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        scanf("%c",&l);
        scanf("%s",a);
        for(i=0;i<n-1;i++)
        {
            scanf("%c",&l);
            scanf("%s",b);
            for(int j=0;j<10;j++)
            {
                a[j]=(char)(((int)a[j]-48)^((int)b[j]-48)+48);
            }
        }
        for(i=0;i<10;i++)
        {
            if(a[i]=='1')
            {
                count++;
            }
        }
        printf("%d\n",count);
        count=0;
    }
	return 0;
	
}

