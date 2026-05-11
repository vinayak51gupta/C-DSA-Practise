#include<stdio.h>
void main(){
    char ch;
    printf("enter a charcter=");
    scanf("%c" , &ch);
    int no = (int)ch;
    if(no>=65 && no<=90){
        printf("UPPER CASE");
    }
    else if(no>=97 && no<=122){
        printf("LOWER CASE");
    }
    else{
        printf("wrong input");
    }
}