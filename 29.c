#include<stdio.h>
void main(){
    int no;
    printf("enter a no=");
    scanf("%d" , &no);
    for(int i=1 ; i<=10 ; i++){
        printf("%d\n" , no*i);
    }
}