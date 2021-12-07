#include<cstdio>
int n;
char s[51],c;
int main() {
	scanf("%d %s", &n, s);
	for (int i = 1; i < n; i++) 
        for (int j = 0; s[j]; j++) 
            scanf(" %c", &c), s[j] = s[j]-c ? '?':c;
	printf("%s", s);
	return 0;
}

// #include <iostream>
// #include <stdlib.h>
// #include <cstring>
// using namespace std;

// int main(){
//     int N = 0;
//     char str[51][51];
//     cin>>N;
//     for(int i=0;i<N;i++) 
//         cin>>str[i];
//     int str_len = strlen(str[0]);
//     char temp_str[51];
//     strncpy(temp_str,str[0],str_len);
//     for(int y=0; y<str_len; y++){
//         for(int x=0; x<N; x++){
//             if(temp_str[y] != str[x][y]) {
//                 temp_str[y] = '?';
//                 break;
//             } 
//         }
//     }
//     cout<<temp_str<<'\n';
//     return 0;
// }

// //문자열 길이는 같다

// //문자열 길이만큼 반복해 문자가 달라지는 부분 찾기.