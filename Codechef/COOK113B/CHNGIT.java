import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
        Scanner obj = new Scanner(System.in);
        int t,n,c=-1,count=0;
        t = obj.nextInt();
        while(t!=0)
        {
            n = obj.nextInt();
            int a[] = new int[n];
            for(int i = 0;i<n;i++)
            {
                a[i]=obj.nextInt();
            }
            for(int i  = 0;i<n;i++)
            {
                for(int j = 0;j<n;j++)
                {
                    if(a[i]==a[j])
                    {
                        count++;
                    }
                }
                if(c<count)
                {
                    c = count;
                }
                count=0;
            }
            System.out.println(n-c);
            c=-1;
            t--;
        }
        
    }
}
