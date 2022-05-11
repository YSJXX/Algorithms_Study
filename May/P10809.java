import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class P10809 {

	public static void main(String[] args) throws IOException {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String str = br.readLine();
		br.close();
		
		int arr[] = new int[26];
		Arrays.fill(arr,-1);
		
		for(int i=0;i<str.length();++i) {
			char tmp = str.charAt(i);
			arr[tmp-97] = arr[tmp-97] != -1 ? arr[tmp-97] : i; 
		}
		for(int i=0;i<arr.length;++i) {
			System.out.print(arr[i]+" ");
		}
		System.out.println("");
	}
}
