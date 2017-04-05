import java.io.*;
import java.util.*;

public class Day28{
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		List<String> list = new ArrayList<>();
		for(int i = 0; i < n; i++){
			String name = sc.next();
			String email = sc.next();
			if(email.endsWith("@gmail.com")){
				list.add(name);
			}
		}
		// for(String iter : list){
		// 	System.out.print(iter + " ");
		// }System.out.println();
		Collections.sort(list);
		for(String iter : list){
			System.out.println(iter);
		}
    }
}
