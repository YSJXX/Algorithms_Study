import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class ProgCTest_Sol_2 {
	public static void main(String[] args) throws IOException {
//		String new_id = "...!@BaT#*..y.abcdefghijklm";
//		String answer = "bat.y.abcdefghi";
//		String new_id = "z-+.^.";
//		String answer = "z--";
//		String new_id = "=.=";
//		String answer = "aaa";
//		String new_id = "abcdefghijklmn.p";
//		String answer = "abcdefghijklmn";
		String new_id = "-.~!@#$%&*()=+[{]}:?,<>/.-";
//		String answer = "-.-";
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		new_id = br.readLine();
        
        // 1단계
        new_id = new_id.toLowerCase();
        
        // 2단계
        String str1 = new_id;
        int len = new_id.length();
        for(int i=0; i<len;++i){
            char tmp = str1.charAt(i);
            if(!('a' <= tmp && tmp <= 'z') && !('0' <= tmp && tmp <= '9') && tmp != '-' && tmp != '_' && tmp != '.'){
                new_id = new_id.replace(Character.toString(tmp),"");
            }
        }
        
        // 3단계
        str1 = new_id;
        while(true){
            str1 = str1.replace("..",".");
            if(str1 == new_id)
                break;
            new_id = str1;
        }
              
        // 4단계
        if(new_id.isEmpty() == false && new_id.charAt(0) == '.') new_id = new_id.substring(1,new_id.length());
        if(new_id.isEmpty() == false ) {
        	if(new_id.charAt(new_id.length()-1) == '.')
        		new_id = new_id.substring(0,new_id.length()-1);
        }
        
        // 5단계
        if(new_id.isEmpty()) new_id = "a";
        
        // 6단계
        if(new_id.length() > 15) {
            new_id = new_id.substring(0,15);
            if(new_id.charAt(new_id.length()-1) == '.')
        		new_id = new_id.substring(0,new_id.length()-1);
        }
        
        // 	7단계
        if(new_id.length() < 3){
            char tmp = new_id.charAt(new_id.length()-1);
            int n = new_id.length();
            for(int i=0;i<3-n;++i){
                new_id += Character.toString(tmp);
            }
        }
        
        System.out.println(new_id);
//        System.out.println(answer);
    }
}