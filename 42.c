#include<stdio.h>
void user(char a);

void main(){
    char ch;
    printf("enter i if user is indian & f if user is french=");
    scanf("%c" , &ch);
    user(ch);
}
void user(char a){
  if(a=='i'){
    printf("NAMASTE");
  }
  else if(a=='f'){
    printf("BONJOUR");
  }
  else{
    printf("Wrong Input");
  }
}
