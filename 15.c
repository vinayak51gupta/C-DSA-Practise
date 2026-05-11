#include<stdio.h>
void main(){
    char ch;
    printf("enter a character=");
    scanf("%c" , &ch);
    int no = (int)ch;
    printf("\n%d" , no>=65&&no<=122);
}