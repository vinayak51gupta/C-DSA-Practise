#include<stdio.h>
void main(){
    int no , result = 1;
    printf("enter a no=");
    scanf("%d" , &no);
    for(int i = no ; i>=1 ; i--){
        result = result*i;
    }
    printf("factorial of no =%d" , result);
}