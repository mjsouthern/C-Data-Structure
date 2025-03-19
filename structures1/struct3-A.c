// array of structures

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

    p p1[3];

    strcpy(p1[0].fname, "Marlon Juhn");
    strcpy(p1[0].mname, "Marsado");
    strcpy(p1[0].lname, "Timogan");
    strcpy(p1[0].address, "Brgy 7, Nasipit ADN");
    p1[0].age = 27;

    strcpy(p1[1].fname, "Jose");
    strcpy(p1[1].mname, "Protacio");
    strcpy(p1[1].lname, "Rizal");
    strcpy(p1[1].address, "Calamba, Laguna");
    p1[1].age = 37;

    strcpy(p1[2].fname, "Bongbong");
    strcpy(p1[2].mname, "Romualdez");
    strcpy(p1[2].lname, "Marcos");
    strcpy(p1[2].address, "Sarrat, Ilocos Norte");
    p1[2].age = 57;
    
    printf("Records:\n");
    for(int i=0 ; i<3 ; i++) {
        printf("-----------------------------\n");
        printf("First Name: %s\n", p1[i].fname);
        printf("Middle Name: %s\n", p1[i].mname);
        printf("Last Name: %s\n", p1[i].lname);
        printf("Address: %s\n", p1[i].address);
        printf("Age: %d\n", p1[i].age);
        printf("-----------------------------\n");
    }

    return 0;
}