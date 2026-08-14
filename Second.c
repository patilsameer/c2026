/*This program demonstrate the use of different data types in C, How to call functions 
and how to pass parameters to functions.*/


#include <stdio.h>

void printInt(int value) {
    printf("Int value: %d\n", value);
}

void printDouble(double value) {
    printf("Double value: %lf\n", value);
}

void printFloat(float value) {
    printf("Float value: %f\n", value);
}

void printChar(char value) {
    printf("Char value: %c\n", value);
}

int main() {
    printf("=== Demonstrating C Data Types ===\n\n");
    
    // Test int
    printf("--- Integer ---\n");
    printInt(42);
    printInt(-100);
    
    // Test double
    printf("\n--- Double ---\n");
    printDouble(3.14159265359);
    printDouble(-2.71828);
    
    // Test float
    printf("\n--- Float ---\n");
    printFloat(2.5f);
    printFloat(-1.618f);
    
    // Test char
    printf("\n--- Character ---\n");
    printChar('A');
    printChar('z');
    printChar('5');
    
    return 0;
}
