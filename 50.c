#include<stdio.h>
int fact(int n);
void main(){
    int n;
    printf("enter n=");
    scanf("%d" , &n);
    printf("%d" , fact(n));
}
int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}