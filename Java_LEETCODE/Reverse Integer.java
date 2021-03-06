package jhh;
import java.io.*;
import java.util.HashMap;
import java.util.Scanner;
public class nt
{ 
	public static int reverse(int num)
	{
		long result = 0;
		while(num!=0)
		{
			result = result*10 + (num%10);
			if(result>Integer.MAX_VALUE) return 0;
			if(result<Integer.MIN_VALUE) return 0;
			num /= 10;
		}
		return (int)result;
	}
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		int key = sc.nextInt();
		int ans = reverse(key);
		System.out.print(ans);
	}
}
