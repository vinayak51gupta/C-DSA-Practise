#include<stdio.h>
#include<string.h>
struct Student {
  char name[100];
  int rollno;
  float cgpa;
};
void printinfo(struct Student s1);
void main(){
 struct Student s1 = {"ARYAN" , 20 , 9.20};
 printinfo(s1);
}
void printinfo(struct Student s1){
  printf("%s  %d  %f" , s1.name , s1.rollno , s1.cgpa);
}