#include<stdio.h>
int main(){
    float a , b;
    char ch;
    printf("enter value of first operand=");
    scanf("%f" , &a);
    printf("enter the value of second operand=");
    scanf("%f" , &b);
    printf("enter the operator + , - , / , * =");
    scanf("%s" , &ch);
    switch(ch){
        case '+' : printf("%f" , a+b);
        break;
        case '-' : printf("%f" , a-b);
        break;
        case '*' : printf("%f" , a*b);
        break;
        case '/' : printf("%f" , a/b);
        break;
        default : printf("wrong input");
    }
    return 0;
}