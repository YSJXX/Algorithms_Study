#include <cstdio>
using namespace std;
int main(){
    int N = 0,top = 0,bot = 2e9,a;
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%d",&a);
        top = a > top ? a : top;
        bot = a < bot ? a : bot;
    }
    printf("%d\n",top*bot);
}
