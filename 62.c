#include<stdio.h>
void main(){
    int a , b , *max;
    printf("enter first value=");
    scanf("%d" , &a);
    printf("enter second value=");
    scanf("%d" , &b);
    if(a>b){
        *max = a;
    }
    else{
        *max = b;
    }
    printf("maximum of 2 nos is=%d" , *max);
}