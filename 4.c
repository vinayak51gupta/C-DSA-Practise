#include<stdio.h>
int main(){
    int r;
    int h;
    printf("enter radius");
    scanf("%d" , &r);
    printf("\nenter height");
    scanf("%d" , &h);
    float v = (22*r*r*h)/7;
    float csa = (2*22*r*h)/7;
    float tsa = (2*22*r*(r+h))/7;
    printf("\nvolume of clinder=%f" , v);
    printf("\ncsa of cylinder=%f" , csa);
    printf("\ntsa of cylinder =%f" , tsa);
    return 0;
}