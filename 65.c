#include<stdio.h>
void main(){
    int items[3];
    float price[3];
    for(int i = 0 ; i<=2  ; i++){
        printf("enter price of item %d=" , i+1);
        scanf("%d" , &items[i]);
        price[i] = 1.18*items[i];
    } 
    for(int i=0 ; i<=2 ; i++){
        printf("final price of item %d including gst will be=%f\n" , i+1 , price[i]);
    }

}