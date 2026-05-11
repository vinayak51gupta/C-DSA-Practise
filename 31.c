#include<stdio.h>
void main(){
    int no;
    while(1){
        printf("enter a no=");
        scanf("%d" , &no);
        if(no%7 == 0){
            break;
        }
        else{
            printf("%d\n" , no);
        }
    }
    printf("thank you");
}