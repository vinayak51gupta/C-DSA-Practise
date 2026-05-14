#include<stdio.h>
void main(){
    int a , b  ;
    printf("enter smaller no=");
    scanf("%d" , &a);
    printf("enter larger no=");
    scanf("%d" , &b);
    for(int j=a ; j<=b ; j++){
        int istrue=0;
        for(int i=2 ; i<=(j-1) ; i++){
         if(j%i==0){
            istrue=1;
            break;
         }
        }
        if(istrue==0){
            printf("%d\n" , j);
        }
    }
}