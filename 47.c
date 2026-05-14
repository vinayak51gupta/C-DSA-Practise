#include<stdio.h>
void square();
void circle();
void rectangle();
void main(){
    char ch;
    printf("press 's' to calculate area of square , 'c' for area of circle and 'r' for rectangle=");
    scanf("%c" , &ch);
    switch(ch){
        case 's' : square();
        break;
        case 'c' : circle();
        break; 
        case 'r' : rectangle();
        break;
        default : printf("wrong input");
    }
}
void square(){
    int side;
    printf("enter length of side=");
    scanf("%d" , &side);
    printf("area of square=%d" , side*side);
}
void circle(){
    float radius;
    printf("enter radius=");
    scanf("%f" , &radius);
    printf("area of circle=%f" , 3.14*radius*radius);
}
void rectangle(){
    int a , b;
    printf("enter length of rectangle=");
    scanf("%d" , &a);
    printf("enter breadth of rectangle=");
    scanf("%d" , &b);
    printf("area of rectangle=%d" , a*b);
}