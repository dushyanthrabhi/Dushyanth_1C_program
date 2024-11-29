#include<stdio.h>
struct employees {
    char name[50];
    int id;
    float salary;
};
int main() {
    int n,i;
    totalsalary=0,averagesalary;
    printf("enter the number of employees");
    scanf("%d",&n);
    
    struct employee employees[n];
    for(i=0;i<n;i++);
    printf("\nenter the details of employee %d\n,i+1);
    printf("enter the name:");
    scanf("%d",&employee[i].name);
    printf("enter the id:");
    scanf(" %d",&employee[i].id);
    printf("enter the salary:");
    scanf("%f",&employee[i].salary);
    totalsalary+=employees[i].salary;
}
averagesalary=totalsalary\n;
printf("\naverage salary of the employee is:%2.f\n",averagesalary);
return 0;
}
