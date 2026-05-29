#include<stdio.h>
#include<string.h>
typedef struct BankAccount{
  char bankname[100];
  char name[100];
  int accno;
  float balance; 
}ba;
void main(){
 ba b1;
 ba b2;
 strcpy(b1.bankname , "ABC Bank");
 strcpy(b2.bankname , "ABC Bank");
 strcpy(b1.name , "Mohan");
 strcpy(b2.name , "Sohan");
 b1.accno = 1234;
 b2.accno = 5678;
 b1.balance = 789.4322;
 b2.balance = 9435.478;
 printf("Bankname : %s , name of acc holder : %s , accno : %d , balance : %f\n" , b1.bankname , b1.name , b1.accno , b1.balance);
 printf("Bankname : %s , name of acc holder : %s , accno : %d , balance : %f" , b2.bankname , b2.name , b2.accno , b2.balance);
}