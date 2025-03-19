// using struct

#include <stdio.h>

int main() {
    
    struct person {
        char fname[50];
        char mname[30];
        char lname[50];
        char address[100];
        int age;
    };

    struct person p;

    printf("Enter First Name: ");
    gets(p.fname);
    printf("Enter Middle Name: ");
    gets(p.mname);
    printf("Enter Last Name: ");
    gets(p.lname);
    printf("Enter Address: ");
    gets(p.address);
    printf("Enter Age: ");
    scanf("%d", &p.age);

    printf("\n----- Data Sheet -----\n");
    printf("First Name: %s\n", p.fname);
    printf("Middle Name: %s\n", p.mname);
    printf("Last Name: %s\n", p.lname);
    printf("Address: %s\n", p.address);
    printf("Age: %d\n", p.age);
    printf("----------------------\n");

    return 0;
}