#include <iostream>
using namespace std;
int main(){
    int X,Y,R;
    cin>>X>>Y;
    R = X>Y ? R=X+Y+Y/10 : R=X+Y+X/10;
    cout<<R<<'\n';
    return 0;
}

// 1370

// #include <stdio.h>
// int main()
// {
// 	int X, Y, total = 0;
// 	scanf("%d %d", &X, &Y);
// 	if (X >= Y)
// 		total = X + Y + (Y / 10);
// 	else
// 		total = X + Y + (X / 10);
// 	printf("%d", total);
// 	return 0;
// }