import java.util.*;
public class ProgCTest_Sol_11 {

	public static void main(String[] args) {
		int[] array = {1, 5, 2, 6, 3, 7, 4};
		int[][] commands = {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}};
		int[] answer = new int[commands.length];
        for(int i=0;i<commands.length;++i){
            int arr[] = new int[commands[i][1] - commands[i][0]+1];
            int a=0;
            for(int x=commands[i][0]-1;x<commands[i][1];++x){
                arr[a++] = array[x];
            }
            Arrays.sort(arr);
            answer[i] = arr[commands[i][2]-1];
        }
	}
}
