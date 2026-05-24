#include<stdio.h>
#include<string.h>
void main(){
    char name[30];
    printf("enter a password=");
    scanf("%s" , &name);
    char salt[] = "123";
    strcat(name , salt);
    printf("%s" , name);
}