
public class ProgCTest_Sol_5 {

	public static void main(String[] args) {
		int answer = 45;
		int[] numbers = {1,2,3,4,6,7,8,0};
        for(int x : numbers){
            answer -= x;
        }
        System.out.println(answer);

	}

}
