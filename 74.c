#include<stdio.h>
void main(){
    int arr[2][10];
    for(int i=0 ; i<=1 ; i++){
        for(int j=0 ; j<=9 ; j++){
            if(i==0){
                arr[i][j] = 2*(j+1);
            }
            else if(i==1){
                arr[i][j] = 3*(j+1);
            }
        }
    }
    for(int i=0 ; i<=1 ; i++){
        for(int j=0 ; j<=9 ; j++){
            printf("%d\t" , arr[i][j]);
        }
        printf("\n");
    }
}