#include<stdio.h>
void printMRP(float price);
void main(){
    int price;
    printf("enter price of item=");
    scanf("%d" , &price);
    printMRP(price);
    printf("%d" , price);
}
void printMRP(float price){
    price = (price + (18*price)/100);
    printf("MRP will be =%f\n" , price);
}