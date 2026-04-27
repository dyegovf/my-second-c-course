#include <stdio.h>   // Standard input/output library
#include <stdlib.h>  // Utility functions library
#include <math.h>    // Math functions library

// Macros and constants
#define PI 3.14159
#define AUTHOR "Someone"

// Global declarations
int globalCounter = 0;        // Global variable
void printCircleArea(float);  // Global function declaration

// Main function (entry point of the program)
int main() {
    float radius = 5.0;
    float area = PI * radius * radius;

    printf("=== Example Program in C ===\n");
    printf("Author: %s\n", AUTHOR);

    // Using global variable
    globalCounter++;
    printf("Execution number: %d\n", globalCounter);

    // Calling auxiliary function
    printCircleArea(radius);

    return 0;
}

// Global function definition
void printCircleArea(float r) {
    // Calculate and print the area of a circle
    float area = PI * r * r;
    printf("Circle area with radius %.2f: %.2f\n", r, area);
}


/*

HOW TO COMPILE AND RUN THIS PROGRAM

gcc mod1-basicconcepts/b-overview.c -o program
./program

*/ 