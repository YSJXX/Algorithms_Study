import java.util.*;
public class progCTest_Sol_4 {

	public static void main(String[] args) {
		
		int board[][] = {
				{0,0,0,0,0},
				{0,0,1,0,3},
				{0,2,5,0,1},
				{4,2,4,4,2},
				{3,5,1,3,1}};
		int moves[] = {1,5,3,5,1,2,1,4};
		
		int answer = 0;
        ArrayList<Stack<Integer>> arr = new ArrayList<Stack<Integer>>();
        Stack<Integer> S = new Stack<>();
        int len = board.length;
        arr.add(new Stack<Integer>());
        for(int i=0;i<len;++i){
            Stack<Integer> tmp = new Stack<Integer>();
            for(int j=len-1;j>=0;--j){
                if(board[j][i] != 0)
                    tmp.add(board[j][i]);
            }
            arr.add(tmp);
        }
        
        for(int i : moves){
        	if(arr.get(i).empty()) {
        		continue;
        	}
        	else if(S.empty()){
                S.push(arr.get(i).peek());
                arr.get(i).pop();
            }
            else{
                if(S.peek() == arr.get(i).peek()){
                    S.pop();
                    arr.get(i).pop();
                    answer += 2;
                }else{
                    S.push(arr.get(i).peek());
                    arr.get(i).pop();
                }
            }
        }
        
        System.out.println(answer);
        
	}

}
