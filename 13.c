#include<stdio.h>
void main(){
    int ismonday , israining;
    printf("if its monday enter 1 otherwise 0=");
    scanf("%d" , &ismonday);
    printf("\nif its raining enter 1 otherwise 0=");
    scanf("%d" , &israining);
    printf("%d" , ismonday&&israining);
}