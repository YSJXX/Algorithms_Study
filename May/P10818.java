import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class P10818 {

	public static void main(String[] args) throws Exception, IOException {
		
		BufferedReader br1 = new BufferedReader(new InputStreamReader(System.in));
		Integer.parseInt(br1.readLine());

		String[] str = br1.readLine().split(" ");
		
		int min = Integer.MAX_VALUE;
		int max = Integer.MIN_VALUE;
		
		for(int i=0;i<str.length;++i) {
			Integer t = Integer.parseInt(str[i]);
			max = max > t ? max : t;
			min = min < t ? min : t;
		}
		System.out.println(min + " " + max);

	}

}
