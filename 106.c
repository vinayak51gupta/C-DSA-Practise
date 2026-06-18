#include<stdio.h>
#include<stdlib.h>
void main(){     //comment
    int *ptr;
    int n;
    printf("enter n=");
    scanf("%d" , &n);
    ptr = (int*)calloc(n , sizeof(int));
    for(int i=0 ; i<n ; i++){
        printf("enter %d value=" , i+1);
        scanf("%d" , &ptr[i]);
    }
    for(int i=0 ; i<n ; i++){
        printf("%d value=%d\n" , i+1 , ptr[i]);
    }
}