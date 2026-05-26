#include<stdio.h>
void main(){
    char name[30];
    printf("enter full name=");
    fgets(name , 30 , stdin);
    printf("your full name is =");
    puts(name);
}