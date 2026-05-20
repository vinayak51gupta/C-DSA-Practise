#include<stdio.h>
void main(){
  char ch = 'a';
  char *ptr = &ch;
  while(*ptr <= 'z'){
    printf("%c  " , (*ptr));
    ((*ptr)++);
  }
  printf("\n%c" , ch);
}