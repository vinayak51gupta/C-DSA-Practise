#include<stdio.h>
#include<string.h>
void main(){
    char password[30];
    char salt[] = "abc";
    printf("enter your password=");
    scanf("%s" , &password);
    strcat(password , salt);
    printf("salted form of your password=%s" , password);
}