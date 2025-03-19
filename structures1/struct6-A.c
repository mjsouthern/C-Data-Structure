// array of structures

#include <stdio.h>
#include <string.h>

typedef struct person {
    char fname[50];
    char mname[30];
    char lname[50];
    char address[100];
    int age;
} p;

void modifyRecord(p *);

int main() {

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
    
    modifyRecord(p1);

    printf("Records:\n");

    for(int i=0 ; i<2 ; i++) {
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

void modifyRecord(p *prs) {
    strcpy(prs[0].fname, "Bongbong");
    strcpy(prs[0].mname, "Romualdez");
    strcpy(prs[0].lname, "Marcos");
    strcpy(prs[0].address, "Sarrat, Ilocos Norte");
    prs[0].age = 57;

    strcpy(prs[1].fname, "Leni");
    strcpy(prs[1].mname, "Gerona");
    strcpy(prs[1].lname, "Robredo");
    strcpy(prs[1].address, "Naga City, Camarines Sur");
    prs[1].age = 40;
}

