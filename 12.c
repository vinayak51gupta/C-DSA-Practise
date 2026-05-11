#include<stdio.h>
void main(){
    int issunday , issnowing;
    printf("if its sunday enter 1 otherwise 0=");
    scanf("%d" , &issunday);
    printf("\nif its snowing enter 1 otherwise 0=");
    scanf("%d" , &issnowing);
    printf("%d" , issunday&&issnowing);
}