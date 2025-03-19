// using typedef struct

#include <stdio.h>

int main() {
    typedef struct person {
        char fname[50];
        char mname[30];
        char lname[50];
        char address[100];
        int age;
    } p;

    p p1; // create an instance of 'person' structure using p

    printf("Enter First Name: ");
    gets(p1.fname);
    printf("Enter Middle Name: ");
    gets(p1.mname);
    printf("Enter Last Name: ");
    gets(p1.lname);
    printf("Enter Address: ");
    gets(p1.address);
    printf("Enter Age: ");
    scanf("%d", &p1.age);

    printf("\n----- Data Sheet -----\n");
    printf("First Name: %s\n", p1.fname);
    printf("Middle Name: %s\n", p1.mname);
    printf("Last Name: %s\n", p1.lname);
    printf("Address: %s\n", p1.address);
    printf("Age: %d\n", p1.age);
    printf("----------------------\n");



    return 0;
}