import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class SW_Ex_2047 {

	public static void main(String[] args) throws IOException {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String str = br.readLine().toUpperCase();
		System.out.println(str);
//		char arr[] = br.readLine().toCharArray();
//		
//		for(int i=0;i<arr.length;++i) {
//			if(arr[i] >= 97 && arr[i] <= 122 )
//				arr[i] = (char) (arr[i] - 32);
//			System.out.print(arr[i]);
//		}
	}

}
