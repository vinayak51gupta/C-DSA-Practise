#include<stdio.h>
void main(){
    char ch;
    float a , b;
    printf("enter operation you want to perform '+' , '-' , '/' , '*'=");
    scanf("%c" , &ch);
    printf("enter value of first operand=");
    scanf("%f" , &a);
    printf("enter value of second opearand=");
    scanf("%f" , &b);
    switch(ch){
        case '+' : printf("addition=%f" , a+b);
        break;
        case '-' : printf("subtraction=%f" , a-b);
        break;
        case '/' : printf("division=%f" , a/b);
        break;
        case '*' : printf("multiply=%f" , a*b);
        break;
        default : printf("wrong input");
    }
}