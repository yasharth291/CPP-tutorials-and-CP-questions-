import java.util.*;
import java.lang.*;
public class example
{
	public static void main(String[]args)
	{
		String a;
		Scanner obj = new Scanner(System.in);
		a  = obj.nextLine();
		System.out.print(Character.toUpperCase(a.charAt(0)));
		for(int i  = 1;i<a.length();i++)
		{
		    System.out.print(a.charAt(i));
		}
	}
}
