#include<stdio.h>
void main(){
    char firstname[] = "VINAYAK";
    char lastname[] = "GUPTA";
    for(int i=0 ; i<=6 ; i++){
        printf("%c" , firstname[i]);
    }
    printf(" ");
    for(int j=0 ; j<=4 ; j++){
        printf("%c" , lastname[j]);
    }
}