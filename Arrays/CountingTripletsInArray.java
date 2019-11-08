

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Arrays;

class GFG {
    
    static void Triplet(int arr[],int n)
    {
        Arrays.sort(arr);
        int count = 0;
        for(int i=n-1;i>=0;i--)
        {
            int j = 0;
            int k = i-1;
            while(j<k)
            {
                if(arr[i] == arr[j] + arr[k])
                {
                    count++;
                    j++;
                    k--;
                    //break;
                }
                else if(arr[i] < arr[j] + arr[k])
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        if(count == 0)
        {
            System.out.println("-1");
        }
        else
        System.out.println(count);
    }
	public static void main (String[] args) {
		Scanner s = new Scanner(System.in);
		int t = s.nextInt();
		while(t>0) 
		{
		   int n = s.nextInt();
		   int a[] = new int[n];
		   for(int i=0;i<n;i++)
		   {
		       a[i] = s.nextInt();
		   }
		   
		   Triplet(a,n);
		   t--;
		}
		
	}
}