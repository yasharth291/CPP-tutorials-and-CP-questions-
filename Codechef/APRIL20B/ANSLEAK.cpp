#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define MAX 5005
#define MYFOR(i,a,b) for (int i = (a); i != (b); i = (a)<(b)? i+1 : i-1)
#define MX 1000000007
int main() 
{
	int test,n,i,m,k,j;
	cin>>test;
	while(test--)
	{
	  cin>>n>>m>>k;
	  int b[505][MAX],a[505][10];
	  for(i = 0;i<n;i++)
	  {
	      for(j = 0;j<m;j++)
	      {
	          a[i][j] = 0;
	      }
	  }
	   int y = m-1,d[10];
	  for(i = 0;i<n;i++)
	  {
	      for(j = 0;j<k;j++)
	      {
	          cin>>b[i][j];
	          a[i][b[i][j]-1]++;
	      }
	  } 
	  int temp;
	  for (i = 0; i < n; i++)      
      {
            for (j = 1; j <= m; j++)
            {
                d[j-1] = j;
                //cout<<d[j-1]<<" ";
    
            }
            for(int p = 0; p<m-1;p++)
            {
                for(j = 0;j < m-p-1;j++ )
                {
                    
                    if(a[i][j]>a[i][j+1])
                    {
                        temp = a[i][j];
                        a[i][j] = a[i][j+1];
                        a[i][j+1] = temp;
                        temp = d[j];
                        d[j] = d[j+1];
                        d[j+1] = temp;
                    }
                    
                }
            }
          
           while(true)
            {
                if((y>=0)&&(d[y]>0))
                {
                    cout<<d[y]<<" ";
                    y--;
                    break;
                }
                else 
                {
                    y = m-1;
                    cout<<d[y]<<" ";
                    y--;
                    break;
                }
                
                
            }
          
      }
      cout<<endl;
	}
	return 0;
}
