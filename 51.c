#include<stdio.h>
float conversion(float c);
void main(){
    float c;
    printf("enter value in celsius=");
    scanf("%f" , &c);
    printf("value in farenhiet will be=%f" , (conversion(c)));
}
float conversion(float c){
    float f = ((1.8*c) + 32) ;
    return f; 
}