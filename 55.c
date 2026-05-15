#include<stdio.h>
#include<math.h>
void power();
void main(){
    power();
}
void power(){
    int a , b;
    printf("enter base=");
    scanf("%d" , &a);
    printf("enter power=");
    scanf("%d" , &b);
    printf("power will be =%f" , (float)pow(a , b));
}