#include <iostream>
#include <stdio.h>
using namespace std;

double factorial(double num){
    if(num <= 0) return 1;
    return num * factorial(num-1);
}

int main(){
    int t = 0;
    int n=0,r=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>r>>n;
        printf("%.f\n",factorial(n)/(factorial(r)*factorial(n-r)));
    }

    return 0;
}