import java.util.*;

public class ProgCTest_Sol_8 {

	public static void main(String[] args) {
		
//		["marina", "josipa", "nikola", "vinko", "filipa"]	["josipa", "filipa", "marina", "nikola"]	"vinko"
//		["mislav", "stanko", "mislav", "ana"]	["stanko", "ana", "mislav"]	"mislav"
		String[] participant = {"leo", "kiki", "eden"};
		String[] completion = {"eden", "kiki"};
		String answer = "";
        HashMap<String,Integer> M = new HashMap<>();
        for(String str : participant){
            if(M.containsKey(str))
                M.put(str,M.get(str)+1);
            else 
                M.put(str,1);
        }
        for(String str : completion){
            M.put(str,M.get(str)-1);
        }
        
        for(String key : M.keySet()){
            if(M.get(key) > 0 )
                System.out.println(key);
        }

	}

}
