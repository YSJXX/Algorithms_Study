// 다음과 같이 import를 사용할 수 있습니다.
import java.util.*;

class Solution {
    public int solution(int[][] garden) {
        // 여기에 코드를 작성해주세요.
        int answer = 0;
        int X_len = garden.length;
        int Y_len = garden[0].length;
        int dx[] = {-1,1,0,0};
        int dy[] = {0,0,-1,1};
        
        // 임시 Q
        Queue<Integer> TXQ = new LinkedList<>();
        Queue<Integer> TYQ = new LinkedList<>();
        // 꽃 위치 확인
        for(int i=0;i<X_len;++i){
            for(int j=0;j<Y_len;++j){
                if(garden[i][j] == 1)   {
                    TXQ.add(i);
                    TYQ.add(j);
                }
            }
        }
        while(true){
            // 좌표 Q
            Queue<Integer> XQ = new LinkedList<>(TXQ);
            Queue<Integer> YQ = new LinkedList<>(TYQ);
            TXQ.clear();
            TYQ.clear();
            while(XQ.size() != 0){
                int X = XQ.poll();
                int Y = YQ.poll();

                for(int i=0;i<4;++i){
                    int nx = dx[i] + X;
                    int ny = dy[i] + Y;
                    if(nx < 0 || nx >= X_len || ny < 0 || ny >= Y_len) continue;
                    if(garden[nx][ny] == 1) continue;
                    garden[nx][ny] = 1;
                    TXQ.add(nx);
                    TYQ.add(ny);
                }
            }
            if(TXQ.size() == 0) break;
            ++answer;
        }
        
        return answer;
    }
    
    // 아래는 테스트케이스 출력을 해보기 위한 main 메소드입니다.
    public static void main(String[] args) {
        Solution sol = new Solution();
        int[][] garden1 = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
        int ret1 = sol.solution(garden1);
        
        // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
        System.out.println("solution 메소드의 반환 값은 " + ret1 + " 입니다.");
        
        int[][] garden2 = {{1, 1}, {1, 1}};
        int ret2 = sol.solution(garden2);
        
        // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
        System.out.println("solution 메소드의 반환 값은 " + ret2 + " 입니다.");
        
    }    
}