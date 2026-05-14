#include<stdio.h>
int printsum(int n , int sum);
void main(){
    int n , sum=0;
    printf("enter n=");
    scanf("%d" , &n);
    printf("%d" , printsum(n , sum));
}
int printsum(int n , int sum){
 if(n==0){
    return sum;
 }
 sum = sum+n;
 return printsum(n-1 , sum);
}