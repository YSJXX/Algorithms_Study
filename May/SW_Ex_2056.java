import java.io.BufferedReader;
import java.io.InputStreamReader;

public class SW_Ex_2056 {

	public static void main(String[] args) throws Exception {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int T = Integer.parseInt(br.readLine()); 
		int arr[] = {31,28,31,30,31,30,31,31,30,31,30,31};
		
		for(int i=1;i<=T;++i) {
			String str = br.readLine();
			int year = Integer.parseInt(str.substring(0, 4));
			int month = Integer.parseInt(str.substring(4, 6));
			int day = Integer.parseInt(str.substring(6, 8));
			
			if(month >= 1 && month <= 12 && day >= 1 && day <= arr[month-1])  
				System.out.printf("#%d %04d/%02d/%02d\n",i,year,month,day);
			else System.out.printf("#%d -1\n",i);
			
		}
	}

}
