
public class ProgCTest_Sol_7 {

	public static void main(String[] args) {

		int nums[] = {1,2,7,6,4};
		int answer = 0;
        int len = nums.length;
        for(int i=0;i<len-2;++i){
            for(int j=i+1;j<len-1;++j){
                for(int z=j+1;z<len;++z){
                    int sum = nums[i] + nums[j] + nums[z];
                    boolean ck = true;
                    for(int x = 2;x<sum;++x){
                        if(sum%x == 0){
                            ck = false;
                            break;
                        }
                    }
                    if(ck) ++answer;        
                }
            }
        }
        System.out.println(answer);
	}
}
