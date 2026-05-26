#include<stdio.h>
#include<string.h>
void main(){
    char str1[30];
    char str2[30];
    printf("enter first string=");
    fgets(str1 , 30 , stdin);
    printf("enter second string=");
    fgets(str2 , 30 , stdin);
    strcpy(str1 , str2);
    printf("copied 2nd string in str1=%s" , str1);
}