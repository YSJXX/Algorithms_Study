import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

public class P1330 {

	public static void main(String[] args) throws IOException {
		
//		Scanner in = new Scanner(System.in);
//				
//		int a = in.nextInt();
//		int b = in.nextInt();
//		
//		in.close();
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String[] str = br.readLine().split(" ");
		int a = Integer.parseInt(str[0]);
		int b = Integer.parseInt(str[1]); 
		
		if(a<b) System.out.println("<");
		else if(a>b) System.out.println(">");
		else System.out.println("==");
	
	}

}
