#include<stdio.h>
void main(){
    FILE *fptr;
    fptr = fopen("101.txt" , "w");
    fprintf(fptr , "%c" , 'M');
    fprintf(fptr , "%c" , 'A');
    fprintf(fptr , "%c" , 'N');
    fprintf(fptr , "%c" , 'G');
    fprintf(fptr , "%c" , 'O');
    fclose(fptr);
}