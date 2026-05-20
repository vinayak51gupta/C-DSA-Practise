#include<stdio.h>
void main(){
    int marks[2][3];
    for(int i=0 ; i<=1 ; i++){
        for(int j=0 ; j<=2 ; j++){
            printf("enter marks of student%d in subject%d=" , i+1 , j+1);
            scanf("%d" , &marks[i][j]);
        }
    }
    for(int i=0 ; i<=1 ; i++){
        for(int j=0 ; j<=2 ; j++){
            printf("Marks of Student%d in subject%d is=%d\n" , i+1 , j+1 , marks[i][j]);
        }
    }
}