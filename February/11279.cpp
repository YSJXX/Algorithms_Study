#include <stdio.h>

int arr[100001]={0};
int size=0;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void move(int val){
    arr[++size] = val; 
    int idx = size;
    while(idx != 1){
        int parent = idx/2;
        if(arr[parent] > arr[idx]) break;
        swap(&arr[parent],&arr[idx]);
        idx = parent;
    }   
}

void del(int index){
    arr[1] = arr[size--];
    while(index*2 <= size+1){
        int left = index*2;
        int right = left+1;
        if(right <= size && arr[left] < arr[right]) left = right;
        if(arr[index] > arr[left]) break;
        swap(&arr[left],&arr[index]);
        index = left;
    }
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
                del(1);
            }
        }
        else move(num);
    }
    return 0;
}