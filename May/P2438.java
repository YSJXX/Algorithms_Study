import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class P2438 {

	public static void main(String[] args) throws Exception, IOException {

		BufferedReader bc = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(bc.readLine());
	
		for(int i=1;i<=N;++i) {
			for(int j=1;j<=i;++j) {
				System.out.printf("*");
			}
			System.out.println("");
		}

	}

}
