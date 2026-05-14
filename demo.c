#include<stdio.h>
void indian();
void french();
void main(){
    char ch;
    printf("enter i if user is indian or f is user is french=");
    scanf("%c" , &ch);
    if(ch=='i'){
        indian();
    }
    else if(ch=='f'){
        french();
    }
    else{
        printf("wrong input");
    }
}
void indian(){
    printf("indian");
}
void french(){
    printf("french");
}