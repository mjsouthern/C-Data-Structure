// arrays of structures

#include <stdio.h>
#include <string.h>


int main() {

    int numRec;
    typedef struct person {
        char fname[50];
        char mname[30];
        char lname[30];
        char address[100];
        int age;
    } p;

    printf("How many records you want to input?: ");
    scanf("%d", &numRec);

    p p1[numRec]; // create an instance for structure 'person'

    // inputting records
    for(int i=0 ; i<numRec ; i++) {
        printf("Enter First Name: ");
        gets(p1[i].fname);
        gets(p1[i].fname);
        printf("Enter Middle Name: ");
        gets(p1[i].mname);
        printf("Enter Last Name: ");
        gets(p1[i].lname);
        printf("Enter Address: ");
        gets(p1[i].address);
        printf("Enter Age: ");
        scanf("%d", &p1[i].age);
        printf("\n");
    }

    // displaying the records
    for(int i=0; i<numRec ; i++) {
        printf("\n------- Record %d -------\n", i+1);
        printf("First Name: %s\n", p1[i].fname);
        printf("Middle Name: %s\n", p1[i].mname);
        printf("Last Name: %s\n", p1[i].lname);
        printf("Address: %s\n", p1[i].address);
        printf("Age: %d\n", p1[i].age);
        printf("-------------------------\n");
    }

    return 0;
}
