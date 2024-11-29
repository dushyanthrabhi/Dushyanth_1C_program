#include<stdio.h>
struct book
{
    char athor[50];
    char name[50];
    char address[50];
    int publicationyear;
    float cost;
};
int main() {
    struct bookdetails b1;
    printf("enter the athor:");
    scanf("%s",&b1.athor);
    printf("enter the name:");
    scanf("%s",&b1.name);
    printf("enter the address:");
    scanf("%s",&b1.address);
    printf(" enter publicationyear:");
    scanf("%s",&b1.publicationyear);
    printf("enter the cost:");
    scanf("%s",&b1.cost);
    printf("\nbook details\n");
    printf("athor:%s\nname:%s\naddress:%s\npublicationyear:%d\ncost:%f\n",b1.athor,b1.name,b1.address,b1.publicationyear,b1.cost);
}
    return 0;
} 
