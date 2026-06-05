#include<stdio.h>
void main(){
    FILE *fptr;
    fptr = fopen("file.c" , "r");
    fclose(fptr);
}