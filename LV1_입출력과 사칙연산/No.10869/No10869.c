#include <stdio.h>

int main(){

    int a,b;
    scanf("%d %d", &a , &b);
    printf("%d" , a+b); // 더하기
    printf("\n"); 
    printf("%d" , a-b); // 뺼셈
    printf("\n"); 
    printf("%d" , a*b); // 곱하기
    printf("\n"); 
    printf("%d" , a/b); // 나누기(몫)
    printf("\n"); 
    printf("%d" , a%b); // 나누기(나머지)

    return 0;
}