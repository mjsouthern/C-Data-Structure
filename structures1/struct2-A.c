// using typedef struct

#include <stdio.h>
#include <string.h>

int main() {
    
    typedef struct person {
        char fname[50];
        char mname[30];
        char lname[50];
        char address[100];
        int age;
    } p;

    p p1; //create an instance of person structure using p

    strcpy(p1.fname, "Marlon Juhn");
    strcpy(p1.mname, "Marsado");
    strcpy(p1.lname, "Timogan");
    strcpy(p1.address, "Brgy 7, Nasipit ADN");
    p1.age = 37;

    printf("First Name: %s\n", p1.fname);
    printf("Middle Name: %s\n", p1.mname);
    printf("Last Name: %s\n", p1.lname);
    printf("Address: %s\n", p1.address);
    printf("Age: %d\n", p1.age);


    return 0;
}