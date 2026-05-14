#include<stdio.h>
void main(){
    int no , istrue=0;
    printf("enter a no=");
    scanf("%d" , &no);
    for(int i=2 ; i<=(no-1) ; i++){
        if(no%i==0){
            istrue=1;
            break;
        }
    }
    if(istrue==0){
        printf("prime no");
    }
    else{
        printf("not prime");
    }
}