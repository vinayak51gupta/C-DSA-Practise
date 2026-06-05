#include<stdio.h>
#include<stdlib.h>
void main(){
    float *ptr;
    ptr = (float*)malloc(5*sizeof(float));
    for(int i=0 ; i<=4 ; i++){
        printf("enter %d value=" , i+1);
        scanf("%f" , &ptr[i]);
    }
    for(int i=0 ; i<=4 ; i++){
        printf("%d value=%f\n" , i+1 , ptr[i]);
    }
}