import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class SW_Ex_2072 {

	public static void main(String[] args) throws IOException {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int T = Integer.parseInt(br.readLine());
		
		for(int i=0;i<T;++i) {
			StringTokenizer str = new StringTokenizer(br.readLine());
			int sum = 0;
			int cnt = str.countTokens();
			for(int j=0; j<cnt; ++j) {
				int Num = Integer.parseInt(str.nextToken());
				if(Num % 2 == 1)
					sum += Num;
			}
			System.out.println("#"+(i+1)+" "+sum);
		}
		

	}

}
