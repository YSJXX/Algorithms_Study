
public class P4673 {
	
	public static int d(int n) {
		int N = n;
		while(n != 0) {
			N += n%10;
			n = n/10;
		}
		return N;	
	}
	
	public static void main(String[] args) {

		int arr[] = new int[10001];
		int ck;
		for(int i=1;i<10001;++i) {
			ck = d(i);
			if(ck < 10001) arr[ck] = 1;
		}
		for(int i=1; i<10001; i++) {
			if(arr[i] != 1) {
				System.out.println(i);
			}
		}

	}

}
