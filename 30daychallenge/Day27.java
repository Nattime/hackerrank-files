import java.io.*;
import java.util.*;

public class Day27 {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Random rand = new Random();
		/**
		 * t: number of test cases
		 * n: number of students attending
		 * k: number of students required to not cancel class
		 * a: time of each student
		 */
        // int t = rand.nextInt(6);
		int t = 5;
		// System.out.println(t);
		// for(int i = 0; i < 10; i++){
		// 	System.out.println(rand.nextInt(6));
		// }

		System.out.println(t);
		for(int i = 0; i < t; ++i){
			int n = rand.nextInt(198) + 3;
			int k = rand.nextInt(n + 1) + 1;
			// int n = 4;
			// int k = 4;
			// System.out.println("t: " + t + "\n\t n: " + n + "\n\t k: " + k);
			System.out.println(n + " " + k);

			StringBuilder str = new StringBuilder();
			/**
			 *	create the 3 required numbers, at least 1 zero, 1 positive int, 1 negative int
			 */
			str.append(0 + " ");
			str.append(rand.nextInt((int)(Math.pow(10,3)) + 1) + " ");
			str.append(-rand.nextInt((int)(Math.pow(10,3)) + 1) + " ");

			for(int j = 3; j < n; ++j){
				str.append(rand.nextInt(((int)(Math.pow(10,3)) * 2) + 1) - (int)(Math.pow(10,3)) + " ");
			}

			System.out.println(str.toString().trim());
		}
    }
}
