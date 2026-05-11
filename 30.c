#include<stdio.h>
void main(){
    int no=2;
    while(no%2 == 0){
        printf("enter a no=");
        scanf("%d" , &no);
    }
    printf("you entered an odd no");
}