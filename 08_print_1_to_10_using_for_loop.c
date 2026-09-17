/* Print numbers 1 to 10 using a for loop (printed page 22). */
#include <stdio.h>  // Include the standard input/output library for printf

int main(void)  // Start of the main function
{
    for (int num = 1; num <= 10; ++num) {  // Repeat from 1 to 10, increasing by 1 each time
        printf("%d\n", num);  // Print the current value of num on a new line
    }  // End of the for loop

    return 0;  // End the program successfully
}  // End of the main function
