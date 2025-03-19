// using struct

#include <stdio.h>
#include <string.h>

struct person {
    char fname[50];
    char mname[30];
    char lname[50];
    char address[100];
    int age;
};

int main() {

    struct person pr; // create an instance of person structure

    strcpy(pr.fname, "Marlon Juhn");
    strcpy(pr.mname, "Marsado");
    strcpy(pr.lname, "Timogan");
    strcpy(pr.address, "Brgy 7. Nasipit, Agusan del Norte");
    pr.age = 10;

    printf("First Name: %s\n", pr.fname);
    printf("Middle Name: %s\n", pr.mname);
    printf("Last Name: %s\n", pr.lname);
    printf("Address: %s\n", pr.address);
    printf("Age: %d\n", pr.age);


    return 0;
}