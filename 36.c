#include<stdio.h>
void main(){
    int no;
    printf("enter a no=");
    scanf("%d" , &no);
    for(int i = 10 ; i>=1 ; i--){
        printf("%d\n" , no*i);
    }
}