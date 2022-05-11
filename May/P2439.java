import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class P2439 {

	public static void main(String[] args) throws Exception, IOException {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(br.readLine());
		
		for(int i=1;i<=N;++i) {
			for(int x=1;x<=N-i;++x) System.out.printf(" ");
			for(int j=1;j<=i;++j) {
				System.out.printf("*");
			}
			System.out.println("");
		}

	}

}
