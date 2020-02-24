import java.util.*;
public class example
{
	public static void main(String[]args) 
	{
		int x,flag = 0;
		Scanner obj = new Scanner(System.in);
		x = obj.nextInt();
		int a[] = new int[4];
		for(int i = x+1;i<=9012;i++)
		{
		    int p = i,o = i;
		    flag = 0;
			for(int j = 0;j<4;j++)
			{
				a[j]=o%10;
				o = o/10;
			}
			for(int k =0;k<4;k++)
			{
				for(int j = 0;j<4;j++)
				{
					if(k!=j)
					{
						if(a[k]==a[j])
						{
							flag = 1;
							break;
						}
					}
				}
				if(flag == 1)
				{
					break;
				}
			}
			if(flag == 0)
			{
				System.out.println(p);
				break;
			}
		}
	}
 
}
