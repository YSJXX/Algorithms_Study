import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class SW_Ex_2043 {

	public static void main(String[] args) throws IOException {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer str = new StringTokenizer(br.readLine());
		
		int P = Integer.parseInt(str.nextToken());
		int K = Integer.parseInt(str.nextToken());
		
		System.out.println(P-K+1);
	}

}
