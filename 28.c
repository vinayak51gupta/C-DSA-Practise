#include<stdio.h>
void main(){
    int n , sum=0;
    printf("enter value of n=");
    scanf("%d" , &n);
    for(int i = n ; i>0 ; i--){
        printf("%d  " , i);
        sum = sum+i;
    }
    printf("\n%d" , sum);
}