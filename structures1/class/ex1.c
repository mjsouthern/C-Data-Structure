// passing a structure to a function by value
#include <stdio.h>
#include <string.h>

typedef struct dog {
    char name[50];
    char color[20];
    char breed[50];
    float weight;
    float height;
} d;

void modifyValues(d);
void displayRecords(d);

int main() {

    d d1;

    strcpy(d1.name, "Sky");
    strcpy(d1.color, "Brown");
    strcpy(d1.breed, "Aspin");
    d1.weight = 12.78; // kg
    d1.height = 2.35; // ft

    modifyValues(d1);
    displayRecords(d1);

    return 0;
}

void modifyValues(d d1) {
    strcpy(d1.name, "Altas");
    strcpy(d1.color, "Black");
    strcpy(d1.breed, "Labrador");
    d1.weight = 15.78; // kg
    d1.height = 4.50; // ft
}

void displayRecords(d d1) {
    printf("Records:\n");
    printf("Name: %s\n", d1.name);
    printf("Color: %s\n", d1.color);
    printf("Breed: %s\n", d1.breed);
    printf("Weight: %.2f kg.\n", d1.weight);
    printf("Height: %.2f kg.\n\n", d1.height);
}