#include<stdio.h>
void main(){
    int marks;
    printf("enter marks=");
    scanf("%d" , &marks);
    if(marks>30){
        printf("PASS");
    }
    else{
        printf("FAIL");
    }
}
