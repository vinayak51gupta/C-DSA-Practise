#include<stdio.h>
#include<string.h>
struct Student{
  char name[100];
  int rollno;
  float cgpa;
};
void main(){
  struct Student s1 = {"ARYAN" , 20 , 9.20};
  struct Student *ptr = &s1;
  printf("%s  %d  %f" , (*ptr).name , (*ptr).rollno , (*ptr).cgpa);
}