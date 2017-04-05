import java.io.*;
import java.util.*;

public class Day29{

	public static void main(String[] args) {
		/* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt(); // number of test cases
		for(int i = 0; i < t; i++){
			int n = sc.nextInt(); // number of cases
			int k = sc.nextInt(); // max value must be less than k
			int max = 0;
			for(int a = 1; a < n; a++){
				for(int b = a + 1; b <= n; b++){
					int sum = a & b;
					if((sum > max) && (sum < k)){
						max = sum;
					}
					// System.out.println("a = " + a + ", b = " + b + "; a & b = " + sum);
				}
			}
			System.out.println(max);
		}
		sc.close();
	}
}
