// basic program using structures (struct, typedef)

#include <stdio.h>
#include <string.h>


int main() {

    struct person {
        char fname[50];
        char mname[30];
        char lname[30];
        char address[100];
        int age;
    };

    struct person p1; // create an instance for structure 'person'

    strcpy(p1.fname, "Jose");
    strcpy(p1.mname, "Protacio");
    strcpy(p1.lname, "Rizal");
    strcpy(p1.address, "Calamba, Laguna");
    p1.age = 35;

    printf("------- Record -------\n");
    printf("First Name: %s\n", p1.fname);
    printf("Middle Name: %s\n", p1.mname);
    printf("Last Name: %s\n", p1.lname);
    printf("Address: %s\n", p1.address);
    printf("Age: %d\n", p1.age);
    printf("---------------------\n");


    return 0;
}
