#include<stdio.h>
void main(){
    int no;
    printf("enter a no");
    scanf("%d" , &no);
    if(no>9 && no<100){
        printf("true");
    }
    else{
        printf("false");
    }
}