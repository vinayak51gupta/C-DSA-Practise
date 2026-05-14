#include<stdio.h>
void main(){
    int a , b;
    printf("enter smallest no=");
    scanf("%d" , &a);
    printf("enter largest no=");
    scanf("%d" , &b);
    for(int j = a ; j<=b ; j++){
        int istrue=1;
        for(int i = 2 ; i<=(j-1) ; i++){
            if(j%i == 0){
             istrue=0;
             break;
            }
        }
        if(istrue==1 && j!=1){
            printf("%d  " , j);
        }
    }
}