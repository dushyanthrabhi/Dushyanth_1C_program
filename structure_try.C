#include <stdio.h>
struct student {
    char name[50];
    int roll;
float marks;
};
int main() {
    struct student s1;
    printf("enter a name");
    scanf("%s",&s1.name);
    printf("enter the roll number:");
    scanf("%s",&s1.roll);
    printf("enter the marks");
    scanf("%s",&s1.marks);
    printf("\nstudent details:\n");
    printf("name:%s\nroll;%d\nmarks:%.2f\n",s1.name,s1.roll,s1.marks);
    return 0;
}
