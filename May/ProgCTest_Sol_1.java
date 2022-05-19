
import java.util.*;

public class ProgCTest_Sol_1 {
	public int[] solution(String[] id_list, String[] report, int k) {
		int answer[] = new int[id_list.length];
		HashMap<String,Integer> mail = new HashMap(); // return mail 
		HashMap<String,HashSet<String> > Rtarget = new HashMap<>(); // Report Target < frodo,muzi > 프로도가 뮤지 신고

		for(String str : id_list){
			mail.put(str,0);
			Rtarget.put(str,new HashSet());
		}

		// 1인 1명 신고 체크 로직
		for(String str : report){
			String tmp[] = str.split(" ");
			Rtarget.get(tmp[1]).add(tmp[0]);              
		}

		for(String str : id_list){
			if(Rtarget.get(str).size() >= k){
				for(String tmp : Rtarget.get(str)){
					mail.put(tmp,mail.get(tmp)+1);
				}
			}
		}

		for(int i=0;i<id_list.length;++i){
			answer[i] = mail.get(id_list[i]);
		}

		return answer;
	}
}
