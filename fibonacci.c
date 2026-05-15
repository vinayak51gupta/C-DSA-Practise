#include<stdio.h>
int fibonacci(int n);
void main(){
    int n;
    printf("enter nth term of fibonacci series=");
    scanf("%d" , &n);
    printf("%d" , fibonacci(n));
}
int fibonacci(int n){
    if(n==1 || n==0){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}