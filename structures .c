#include <stdio.h>
#include <string.h>
struct student{
    int rollno;
    char name[15];
    float age;
    char gender;
    char section;
    char branch[15];
};
int main() {
    struct student s1;
    printf("Size of student structure is %d", sizeof(s1));
    s1.rollno = 2024178077;
    strcpy(s1.name,"jahnavi");
    s1.age = 19.2;
    s1.gender = 'F';
    s1.section ='A';
    strcpy(s1.branch,"biotechnology");
    
    printf("\nRoll no: %d",s1.rollno);
    printf("\nName: %s",s1.name);
    printf("\nAge: %f",s1.age);
    printf("\nGender: %c",s1.gender);
    printf("\nsection: %c",s1.section);
     printf("\nbranch: %s",s1.branch);
    return 0;
