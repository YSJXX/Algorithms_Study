import java.util.*;
public class ProgCTest_Sol_3 {

	public static void main(String[] args) {
		String s = 	"one4seveneight";
		String ans = "";
		HashMap<String,String> m = new HashMap();
		m.put("zero","0");
		m.put("one","1");
		m.put("two","2");
		m.put("three","3");
		m.put("four","4");
		m.put("five","5");
		m.put("six","6");
		m.put("seven","7");
		m.put("eight","8");
		m.put("nine","9");

		String tmp = "";
		for(int i=0;i<s.length();++i){
			if('0' <= s.charAt(i) && s.charAt(i) <= '9' )
				ans += Character.toString(s.charAt(i));
			else{
				tmp += Character.toString(s.charAt(i));
				if(m.containsKey(tmp)){
					ans += m.get(tmp);
					tmp = "";
				}
			}

		}
		
		
		//-----------------------------------------------
		// 더 나은 코드 
		 int answer = 0;
	        StringBuilder sb = new StringBuilder("");
	        int len = s.length();
	        String[] digits = {"0","1","2","3","4","5","6","7","8","9"};
	        String[] alphabets = {"zero","one","two","three","four","five","six","seven","eight","nine"};

	        for(int i=0; i<10; i++){
	            s = s.replaceAll(alphabets[i],digits[i]);
	        }
	        
		System.out.println(Integer.parseInt(ans));
		
//		return Integer.parseInt(ans);
	}

}
