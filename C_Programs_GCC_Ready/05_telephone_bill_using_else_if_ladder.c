/* Telephone bill using an else-if ladder (printed page 18). */
#include <stdio.h>

int main(void)
{
    int units, custno;
    float charge;

    printf("Enter customer number and units consumed: ");
    if (scanf("%d%d", &custno, &units) != 2 || units < 0) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    if (units <= 200) {
        charge = 0.5f * units;
    } else if (units <= 400) {
        charge = 100.0f + 0.65f * (units - 200);
    } else if (units <= 600) {
        charge = 230.0f + 0.8f * (units - 400);
    } else {
        charge = 390.0f + (units - 600);
    }

    printf("Customer No: %d consumed %d units\n", custno, units);
    printf("The total bill amount is: %.2f\n", charge);
    return 0;
}
