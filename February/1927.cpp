#include <bits/stdc++.h>
using namespace std;
int heap[100001]={0};
int sizej=0;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void push(int input){
    heap[++sizej]=input;
    int index = sizej;
    while(index != 1){
        int par = index/2;
        if(heap[par] <= heap[index]) break;
        swap(&heap[par],&heap[index]);
        index = par;
    }
}

void top(){
    printf("%d\n",heap[1]);
}

void pop(){
    heap[1] = heap[sizej--];
    heap[sizej+1]=0;
    int index = 1;
    while(index*2 <= sizej){
        int left = index*2;
        int right = left+1;
        if(right <= sizej && heap[right] <= heap[left]) left = right;
        if(heap[index] < heap[left]) break;
        swap(&heap[index],&heap[left]);
        index = left;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;cin>>N;
    int input;
    for(int i=1;i<=N;++i){
        cin>>input;
        if(input == 0){
            if(sizej == 0) top();
            else {
                top();
                pop();
            }
        }else 
            push(input);
    }
    return 0;
}