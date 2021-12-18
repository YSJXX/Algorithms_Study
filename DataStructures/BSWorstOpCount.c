#include <stdio.h>

int BSearch(int ar[], int len, int target){
    int first =0;
    int last = len -1;
    int mid;
    int opCount = 0;    // 비교연산의 횟수를 기록

    while(first <= last){
        mid = (first+last) / 2;

        if(target == ar[mid]) return mid;
        else {
            if(target < ar[mid]) last = --mid;
            else first = ++mid;
        }
        ++opCount;
    }
    printf("비교연산 횟수: %d\n",opCount);
    return -1;
}

int main(){
    int arr1[500] = {0,};
    int arr2[5000] = {0,};
    int arr3[50000] = {0,};
    int idx;
    // 배열 arr1을 대상으로 저장되지 않은 정수 1을 찾으라고 명령
    idx = BSearch(arr1, sizeof(arr1)/sizeof(int), 1);
    if(idx == -1) printf("탐색 실패\n\n");
    else printf("타켓 저장 인덱스: %d\n",idx);

    idx = BSearch(arr2, sizeof(arr2)/sizeof(int), 2);
    if(idx == -1) printf("탐색 실패\n\n");
    else printf("타켓 저장 인덱스: %d\n",idx);

    idx = BSearch(arr3, sizeof(arr3)/sizeof(int), 3);
    if(idx == -1) printf("탐색 실패\n\n");
    else printf("타켓 저장 인덱스: %d\n",idx);
    return 0;
}