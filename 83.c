#include<stdio.h>
#include<string.h>
void main(){
 char str1[] = "VINAYAK ";
 char str2[] = "GUPTA";
 strcat(str1 , str2);
 printf("Successfully concatinated str2 in str1. Value of str1 now is=%s" , str1);
}