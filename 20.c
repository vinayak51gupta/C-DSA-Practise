#include<stdio.h>
void main(){
    int marks;
    printf("enter marks=");
    scanf("%d" , &marks);
    (marks>30 && marks<101) ? printf("PASS") : printf("FAIL or WRONG INPUT");
}