// passing a structure to a function, by value

#include <stdio.h>
#include <string.h>

typedef struct person {
    char fname[50];
    char mname[30];
    char lname[30];
    char address[100];
    int age;
} p;

void modifyRecords(p);

int main() {


    p p1; // create an instance for structure 'person'

    strcpy(p1.fname, "Marlon Juhn");
    strcpy(p1.mname, "Marsado");
    strcpy(p1.lname, "Timogan");
    strcpy(p1.address, "Brgy. 7 Nasipit ADN");
    p1.age = 27;

    modifyRecords(p1);


    printf("\n------- Record -------\n");
    printf("First Name: %s\n", p1.fname);
    printf("Middle Name: %s\n", p1.mname);
    printf("Last Name: %s\n", p1.lname);
    printf("Address: %s\n", p1.address);
    printf("Age: %d\n", p1.age);
    printf("---------------------\n");


    return 0;
}

void modifyRecords(p prs) {
    strcpy(prs.fname, "Bongbong");
    strcpy(prs.mname, "Romualdez");
    strcpy(prs.lname, "Marcos");
    strcpy(prs.address, "Ilocos Norte");
    prs.age = 47;
}