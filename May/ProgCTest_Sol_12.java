
public class ProgCTest_Sol_12 {

	public static void main(String[] args) {
		int[] answers = {1,2,3,4,5};
		int[] answer = new int[3];
        int n1[] = { 1, 2, 3, 4, 5 };
        int n2[] = { 2, 1, 2, 3, 2, 4, 2, 5 };
        int n3[] = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
        int arr[] = new int[3];
        for(int i=0;i<answers.length;++i){
            if(n1[i%5] == answers[i]) ++arr[0];
            if(n2[i%8] == answers[i]) ++arr[1];
            if(n3[i%10] == answers[i]) ++arr[2];
        }
        int max = Math.max(arr[0],Math.max(arr[1],arr[2]));
        int a=0;
        for(int i=0;i<3;++i){
            if(max == arr[i]) answer[a++] = i+1;
        }
        int ans[] = new int[a];
        for(int i=0;i<a;++i)
            ans[i] = answer[i];

	}

}
