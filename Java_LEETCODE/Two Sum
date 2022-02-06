package jhh;
import java.io.*;
import java.util.HashMap;
import java.util.Scanner;
public class nt
{ // two sum
	public static int[] func(int [] nums, int target)
	{
        HashMap<Integer, Integer> mp = new HashMap<>();
		for(int i = 0;i<nums.length;i++)
		{
			if(mp.containsKey(target-nums[i]))
			{
				return new int[] {mp.get(target-nums[i]), i};
			}
			mp.put(nums[i], i);
		}
		return new int[] {};
	}
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		int arr[] = new int[5];
		for(int i = 0;i<5;i++)
		{
			int ele = sc.nextInt();
			arr[i] = ele;
		}
		
		int ans[] = func(arr,9);
		for(int i = 0;i<ans.length;i++)
		{
			System.out.print(ans[i] + " ");
		}
	}
}
