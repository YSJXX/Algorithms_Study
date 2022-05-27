import java.util.*;
public class Prog_CTest_Sol_10 {

	public static void main(String[] args) {

		int n = 5;
		int[] lost = {2, 4};
		int[] reserve = {1, 3, 5};
		int answer = n-lost.length;
        int arr[] = new int[n+2];
        Arrays.fill(arr,1);
        Arrays.sort(reserve);
        for(int i : lost){
            --arr[i];
        }
        for(int x : reserve){
            if(arr[x] == 0)
                ++answer;
            ++arr[x];
        }
        for(int x : reserve){
            if(arr[x] > 1){
                if(arr[x-1] == 0){
                    ++arr[x-1];
                    ++answer;
                }
                else if(arr[x+1] == 0){
                    ++arr[x+1];
                    ++answer;
                }    
            }
        }

	}

}
