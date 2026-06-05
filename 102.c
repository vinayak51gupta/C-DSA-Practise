#include<stdio.h>
void main(){
    FILE *fptr;
    fptr = fopen("102.txt" , "r");
    printf("%c\n" , fgetc(fptr));
    printf("%c\n" , fgetc(fptr));
    printf("%c\n" , fgetc(fptr));
    printf("%c\n" , fgetc(fptr));
    printf("%c\n" , fgetc(fptr));

    fptr = fopen("102.txt" , "w");
    fputc('M' , fptr);
    fputc('A' , fptr);
    fputc('N' , fptr);
    fputc('G' , fptr);
    fputc('O' , fptr);

    fclose(fptr);

}