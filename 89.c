#include<stdio.h>
#include<string.h>
void main(){
    int istrue=0;
    char ch;
    char str[] = "vinayak gupta";
    printf("enter a character=");
    scanf("%c" , &ch);
    for(int i=0 ; i<=strlen(str) ; i++){
     if(str[i]==ch){
        istrue=1;
        break;
     }
    }
    if(istrue==1){
        printf("character is present");
    }
    else{
        printf("character is not present");
    }
}