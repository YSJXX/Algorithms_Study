import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class P1546 {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(br.readLine());
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		float ans=0;
		float max = Integer.MIN_VALUE;
		float arr[] = new float[N];
		int cnt = st.countTokens();
		for(int i=0;i<N;++i) {
			arr[i] = Float.parseFloat(st.nextToken());
			max = Math.max(max, arr[i]);
		}
		for(int i=0;i<N;++i) ans += (arr[i]/max)*100;
		System.out.printf("%f\n",ans/N);
		
		br.close();
	}

}
