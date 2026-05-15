#include<stdio.h>
void marks();
void main(){
    marks();
}
void marks(){
    float m , s , sc;
    printf("enter marks in maths=");
    scanf("%f" , &m);
    printf("enter marks in science=");
    scanf("%f" , &sc);
    printf("enter marks in sanskrit=");
    scanf("%f" , &s);
    float net = (m+s+sc)/3;
    printf("the percentage of student from marks in science , maths and sasnkrit=%f" , net);
}