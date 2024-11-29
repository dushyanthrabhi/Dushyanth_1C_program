#include <stdio.h>
struct student
{
    char name[50];
    char gender[50];
    char college[50];
    int age;
};
int main(){
    struct student s1;
    printf("enter the name");
    scanf("%s",&s1.name);
    printf("enter the gender");
    scanf("%s",&s1.gender);
    printf("enter the college");
    scanf("%s",&s1.college);
    printf("enter the age");
    scanf("%s",&s1.age);
    printf("\nstudent details\n");
    printf("name:%c\n");
    printf("gender:%c\n");
    printf("college:%c\n");
    printf("age:%d\n");
}
return 0;
}
