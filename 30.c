#include<stdio.h>
void main(){
    int no;
    while(1){
        printf("enter a no=");
        scanf("%d" , &no);
        if(no%2 == 0){
            printf("%d\n" , no);
        }
        else{
            break;
        }
    }
    printf("thank you");
}