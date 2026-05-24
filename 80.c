#include<stdio.h>
void main(){
    char name[100];
    printf("Enter your full name=");
    fgets(name , 100 , stdin);
    printf("your full name is=");
    puts(name);
}