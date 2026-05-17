#include<stdio.h>
void swap(int *a , int *b);
void main(){
    int a = 25;
    int b = 16;
    printf("Before Swapping\n");
    printf("a=%d\n" , a);
    printf("b=%d\n" , b);
    
    swap(&a , &b);

    printf("After Swapping\n");
    printf("a=%d\n" , a);
    printf("b=%d\n" , b);
}
void swap(int *a , int *b){
    int swap = (*a);
    (*a) = (*b);
    (*b) = swap;
}