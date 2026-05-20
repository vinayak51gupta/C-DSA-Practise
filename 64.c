#include<stdio.h>
void main(){
    int marks[3];
    for(int i=0 ; i<=2 ; i++){
        printf("enter marks of subject %d=" , i+1);
        scanf("%d" , &marks[i]);
        printf("\n");
    }
    for(int i=0 ; i<=2 ; i++){
        printf("subject %d marks=%d\n" , i+1 , marks[i]);
    }
}