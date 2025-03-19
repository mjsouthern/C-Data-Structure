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

    struct person p; // create an instance of person structure

    strcpy(p.fname, "Marlon Juhn");
    strcpy(p.mname, "Marsado");
    strcpy(p.lname, "Timogan");
    strcpy(p.address, "Brgy 7. Nasipit, Agusan del Norte");
    p.age = 10;

    printf("First Name: %s\n", p.fname);
    printf("Middle Name: %s\n", p.mname);
    printf("Last Name: %s\n", p.lname);
    printf("Address: %s\n", p.address);
    printf("Age: %d\n", p.age);


    return 0;
}