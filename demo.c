#include<stdio.h>
void circle();
void rectangle();
void square();
void main(){
    char ch;
    printf("enter 'c' to calculate area of circle , 'r' for rectangle , 's' for square=");
    scanf("%c" , &ch);
    switch(ch){
        case 'c' : circle();
        break;
        case 'r' : rectangle();
        break;
        case 's' : square();
        break;
        default : printf("wrong input");
    }
}
void circle(){
    float radius;
    printf("enter radius=");
    scanf("%f" , &radius);
    printf("area of circle=%f" , 3.14*radius*radius);
}
void rectangle(){
    int l , b;
    printf("enter length=");
    scanf("%d" , &l);
    printf("enter breadth=");
    scanf("%d" , &b);
    printf("area of rectangle=%d" , l*b);
}
void square(){
    int side;
    printf("enter side=");
    scanf("%d" , &side);
    printf("area of square=%d" , side*side);
}