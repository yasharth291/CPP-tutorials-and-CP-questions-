import java.util.*;
import java.lang.*;
class example
{
	public static void main(String[]args)
	{
		String a;
		int countL = 0, countU = 0;
		Scanner obj = new Scanner(System.in);
		a  = obj.nextLine();
		for(int i  = 0;i<a.length();i++)
		{
		    if(Character.isUpperCase(a.charAt(i)))
			{
				countU++;
			}
			else if(Character.isLowerCase(a.charAt(i)))
			{
				countL++;
			}
		}
		if(countL>=countU)
		{
		    for(int i = 0;i<a.length();i++)
		    {
		        
			    System.out.print(Character.toLowerCase(a.charAt(i)));
		    }
		}
		else if(countL<countU)
		{
		    
		    for(int i = 0;i<a.length();i++)
		    {
		        
			    System.out.print(Character.toUpperCase(a.charAt(i)));
		    }
		}

	}
}
