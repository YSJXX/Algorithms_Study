import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class SW_Ex_2029 {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int T = Integer.parseInt(br.readLine());
		
		for(int i=1;i<=T;++i) {
			StringTokenizer str = new StringTokenizer(br.readLine());
			int n1 = Integer.parseInt(str.nextToken());			
			int n2 = Integer.parseInt(str.nextToken());
			
			System.out.println("#"+i+" "+(n1/n2)+" "+(n1%n2));
			
		}
	}

}
