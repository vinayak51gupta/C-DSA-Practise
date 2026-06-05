#include<stdio.h>
#include<stdlib.h>
void main(){
    int *ptr;
    ptr = (int*)malloc(5*sizeof(int));
    for(int i=0 ; i<=4 ; i++){
        printf("enter %d value=" , i+1);
        scanf("%d" , &ptr[i]);
    }
    for(int i=0 ; i<=4 ; i++){
        printf("%d value=%d\n" , i+1 , ptr[i]);
    }
}