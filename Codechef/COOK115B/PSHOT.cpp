#include<bits/stdc++.h>
using namespace std;

int main()
   {
     long int t;
     
     cin >> t;
     while(t--)
        {
           long long int n,p,flag=0,i,z,a=0,b=0,ac,bc,ans=0;
           cin >> n ;
           
           
          string s;
          cin >> s;
          

          for(i=0;i<n;i++)
            {
               if(s[i]=='1' && i%2==0)
                 {
                   a++;
                  }
               else if(s[i]=='1' && i%2!=0)
                 {
                    b++;
                   }
             }
          if(n%2==0)
            {
               ac=n/2;
               bc=n/2;
            }
          else
            {
                ac=n/2;
                bc=(n/2)+1;
             }
          for(i=n;i<(2*n);i++)
            {
              
              
                   if(s[i]=='1' && i%2==0)
                  {
                   a++;
                   //ac--
                  }
                 else if(s[i]=='1' && (i%2)!=0)
                 {
                    b++;
          
                   }  
                
                if(i%2==0)
                  {
                   ac--;
                  }
                 else if(i%2!=0)
                 {
                    bc--;
                   }  
                if(a>(bc+b) || b>(ac+a))
                {
                   ans=i+1;
                   break;
                 }
             }
         if(ans==0)
           {   ans=2*n; }
     
         cout << ans << endl;
      }
  }
