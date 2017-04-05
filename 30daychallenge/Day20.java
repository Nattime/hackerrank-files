import java.io.*;
import java.util.*;

public class Day20 {

	public static int bubble_sort(int[] data){
		int count = 0;
		boolean hasSwapped = false;
		do{
			hasSwapped = false;
			for(int i = 1; i < data.length; ++i){
				if(data[i] < data[i - 1]){
					int temp = data[i];
					data[i] = data[i - 1];
					data[i - 1] = temp;
					hasSwapped = true;
					count++;
				}
			}
		}while(hasSwapped == true);

		return count;
	}

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */

		Scanner sc = new Scanner(System.in);
		int count = sc.nextInt();
		int[] arr = new int[count];
		for(int i = 0; i < count; ++i){
			arr[i] = sc.nextInt();
		}



		System.out.println("Array is sorted in " + bubble_sort(arr) + " swaps.");
		System.out.println("First Element: " + arr[0]);
		System.out.println("Last Element: " + arr[count - 1]);
    }
}
