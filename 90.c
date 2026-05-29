#include<stdio.h>
#include<string.h>
struct Student{
    char name[100];
    int rollno;
    float cgpa;
};
void main(){
 struct Student s1;
 struct Student s2;
 strcpy(s1.name , "Rahul");
 s1.rollno = 20;
 s1.cgpa = 9.2;
 strcpy(s2.name , "Aryan");
 s2.rollno = 30;
 s2.cgpa = 10.0;
 printf("student 1 name=%s\n" , s1.name);
 printf("student 1 rollno=%d\n" , s1.rollno);
 printf("student 1 cgpa=%f\n" , s1.cgpa);
 printf("student 2 name=%s\n" , s2.name);
 printf("student 2 rollno=%d\n" , s2.rollno);
 printf("student 2 cgpa=%f\n" , s2.cgpa);
}
