#include<stdio.h>
int printsum(int a , int b);
void main(){
    int a , b;
    printf("enter first value=");
    scanf("%d" , &a);
    printf("enter second value=");
    scanf("%d" , &b);
    printf("%d" , printsum(a , b));
}
int printsum(int a , int b){
    printf("sum will =");
    return a+b;
}