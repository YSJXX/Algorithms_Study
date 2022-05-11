import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class P2577 {

	public static void main(String[] args) throws Exception, IOException {
	
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int A = Integer.parseInt(br.readLine());
		int B = Integer.parseInt(br.readLine());
		int C = Integer.parseInt(br.readLine());
		int R = A*B*C;
		
		int arr[] = new int[11];
		
		while(R != 0) {
			arr[R%10]++;
			R = R/10;
		}
		for(int i=0;i<=9;++i) System.out.println(arr[i]);
	}

}
