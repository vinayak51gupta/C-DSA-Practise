#include<stdio.h>
void printaddress(int *n);
void main(){
    int n = 4;
    printf("%p\n" , &n);
    printaddress(&n);
}
void printaddress(int *n){
    printf("%p\n" , n);
}