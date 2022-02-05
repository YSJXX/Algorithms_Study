#include <stdio.h>

int arr[100001]={0};
int size=0;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void move(int index){
    int parent = index/2;
    while(parent >= 1){
        if(arr[parent] > arr[index]) break;
        swap(&arr[parent],&arr[index]);
        index = parent;
        parent = index/2;
    }
}

void del(){
    int index = 1;
    int left = index*2;
    arr[index] = arr[size+1];
    while(left <= size+1){
        int right = left+1;
        if(right <= size+1)
            if(arr[right] > arr[left]) left = right;
        if(arr[left] < arr[index]) break;
        swap(&arr[index],&arr[left]);
        index = left;
        left = index*2;
    }
    --size;
}

int main(){
    int N;scanf("%d",&N);
    int num;
    int cnt=0;
    for(int i=1;i<=N;++i){
        scanf("%d",&num);
        if(num == 0) {
            if(size == 0) printf("0\n");
            else {
                printf("%d\n",arr[1]); //첫번째 값이 제일 큰 값으로
                del();
            }
        }
        else{
            arr[size+1] = num;
            move(size+1);
            ++size;
        }
    }
    return 0;
}