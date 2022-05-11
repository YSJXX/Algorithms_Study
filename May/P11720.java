import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class P11720 {

	public static void main(String[] args) throws IOException {

//		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//		br.readLine();	// 첫번입력 비우기
//		char str[] = br.readLine().toCharArray();
//		br.close();
//				
//		int sum = 0;
//		for(int i=0;i<str.length;++i) {
//			sum += Integer.parseInt(String.valueOf(str[i])); 
//		}
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		br.readLine();
		String str = br.readLine();
		br.close();
		
		int sum = 0;
		for(int i=0;i<str.length();++i) {
			sum += str.charAt(i) - '0';
		}
		System.out.println(sum);
	}

}
