// array of structures

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int numRec;

    typedef struct person {
        char fname[50];
        char mname[30];
 
        float sub1;
        float sub2;
        float sub3;
        float sub4;
        float avg;
    } p;

    // system("clear");

    printf("How many student's record you want to input in the system?: "); 
    scanf("%d", &numRec);

    getchar();
    
    p p1[numRec];

    for(int i=0 ; i<numRec ; i++) {
        printf("------ Student %d ------\n", i+1);
        printf("Student Name: ");
        scanf(" %[^\n]", p1[i].fname);
        printf("Year Level and Course: ");
        scanf(" %[^\n]", p1[i].mname);

        printf("\nEnglish: ");
        scanf("%f", &p1[i].sub1);
        printf("Filipino: ");
        scanf("%f", &p1[i].sub2);
        printf("Mathematics: ");
        scanf("%f", &p1[i].sub3);
        printf("Social Science: ");
        scanf("%f", &p1[i].sub4);

        p1[i].avg = (p1[i].sub1 + p1[i].sub2 + p1[i].sub3 + p1[i].sub4)/4;

        printf("--------------------\n");
    }

    
    printf("\n\nStudent Records:\n");
    for(int i=0 ; i<numRec ; i++) {
        printf("-----------------------------\n");
        printf("Student Name: %s\n", p1[i].fname);
        printf("Year Level and Course: %s\n", p1[i].mname);

        printf("\nEnglish: %.2f\n", p1[i].sub1);
        printf("Filipino: %.2f\n", p1[i].sub2);
        printf("Mathematics: %.2f\n", p1[i].sub3);
        printf("Social Science: %.2f\n", p1[i].sub4);

        printf("\nGPA %.2f\n", p1[i].avg);
        printf("-----------------------------\n");
    }

    return 0;
}