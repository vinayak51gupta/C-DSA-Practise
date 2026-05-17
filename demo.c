#include<stdio.h>
void main(){
    int a , b;
    printf("enter first value=");
    scanf("%d" , &a);
    printf("enter second value=");
    scanf("%d" , &b);
    printf("prime no in range=\n");
    for(int i = a ; i <= b ; i++){
       int istrue = 1;
     for(int j = 2 ; j<=(i-1) ; j++){
       if(i%j==0){
        istrue = 0;
        break;
       }
     }
     if(istrue==1){
        printf("%d " , i);
     }
    }
}