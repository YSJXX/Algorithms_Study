import java.util.*;
public class ProgCTest_Sol_9 {

	public static void main(String[] args) {

		int nums[] = {3,1,2,3};
		int answer = 0;
        Set<Integer> S = new HashSet<>();
        for(int i : nums){
            S.add(i);
        }
        
        int n = nums.length/2;
        if(n < S.size())
            answer = n;
        else
            answer = S.size();

	}

}
