#include<stdio.h>
#include<string.h>
struct People{
  char address[100];
  int houseno;
  char ch;
  char city[100];
  char state[100];
};
void main(){
 struct People p1;
 struct People p2;
 struct People p3;
 struct People p4;
 struct People p5;
 strcpy(p1.address , "Subash Nagar");
 strcpy(p2.address , "Tilak Nagar");
 strcpy(p3.address , "Gurugram");
 strcpy(p4.address , "Madgaon");
 strcpy(p5.address , "Rehari Colony");
 p1.houseno = 12;
 p2.houseno = 13;
 p3.houseno = 14;
 p4.houseno = 15;
 p5.houseno = 16;
 p1.ch = 'A';
 p2.ch = 'B';
 p3.ch = 'C';
 p4.ch = 'D';
 p5.ch = 'E';
 strcpy(p1.city , "Jammu");
 strcpy(p2.city , "Delhi");
 strcpy(p3.city , "Haryana");
 strcpy(p4.city , "Goa");
 strcpy(p5.city , "Jammu");
 strcpy(p1.state , "J&K");
 strcpy(p2.state , "Delhi NCR");
 strcpy(p3.state , "Delhi NCR");
 strcpy(p4.state, "Goa");
 strcpy(p5.state, "J&K");
  printf("details of 1 person = address : %s , houseno : %d , block : %c , city : %s , state : %s\n" , p1.address , p1.houseno , p1.ch , p1.city , p1.state);
  printf("details of 2 person = address : %s , houseno : %d , block : %c , city : %s , state : %s\n" , p2.address , p2.houseno , p2.ch , p2.city , p2.state);
  printf("details of 3 person = address : %s , houseno : %d , block : %c , city : %s , state : %s\n" , p3.address , p3.houseno , p3.ch , p3.city , p3.state);
  printf("details of 4 person = address : %s , houseno : %d , block : %c , city : %s , state : %s\n" , p4.address , p4.houseno , p4.ch , p4.city , p4.state);
  printf("details of 5 person = address : %s , houseno : %d , block : %c , city : %s , state : %s\n" , p5.address , p5.houseno , p5.ch , p5.city , p5.state);
}
