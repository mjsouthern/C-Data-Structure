// using struct

#include <stdio.h>
#include <string.h>

typedef struct person {
    char fname[50];
    char mname[30];
    char lname[50];
    char address[100];
    int age;
} p;

void modifyRecord(p);

int main() {
    p p1;
    strcpy(p1.fname, "Marlon Juhn");
    strcpy(p1.mname, "Marsado");
    strcpy(p1.lname, "Timogan");
    strcpy(p1.address, "Brgy 7. Nasipit, Agusan del Norte");
    p1.age = 27;

    modifyRecord(p1); // passing the instance of person structure 'p1' to a function, by value.

    printf("First Name: %s\n", p1.fname);
    printf("Middle Name: %s\n", p1.mname);
    printf("Last Name: %s\n", p1.lname);
    printf("Address: %s\n", p1.address);
    printf("Age: %d\n", p1.age);

    return 0;
}

void modifyRecord(p prs) {
    strcpy(prs.fname, "Jose");
    strcpy(prs.mname, "Protacio");
    strcpy(prs.lname, "Rizal");
    strcpy(prs.address, "Calamba, Laguna");
    prs.age = 47;
}
