/*
 * Telephone bill using an else-if ladder 
 *
 * Step-by-step overview:
 * 1. Include stdio.h so the program can use printf, scanf, and fprintf.
 * 2. Declare variables for the customer number, consumed units, and bill.
 * 3. Read the customer number and number of units from the keyboard.
 * 4. Reject input unless both values were read successfully and units are
 *    non-negative.
 * 5. Select the correct billing slab with an else-if ladder:
 *      - The first 200 units cost 0.50 per unit.
 *      - Units 201 through 400 cost 100.00 plus 0.65 for each unit over 200.
 *      - Units 401 through 600 cost 230.00 plus 0.80 for each unit over 400.
 *      - Units above 600 cost 390.00 plus 1.00 for each unit over 600.
 * 6. Display the customer number, units consumed, and calculated bill.
 * 7. Return 0 to indicate successful completion.
 */
#include <stdio.h>

int main(void)
{
    /* Store the input values and the calculated bill amount. */
    int units, custno;
    float charge;

    /* Prompt for, then read, the customer number and consumed units. */
    printf("Enter customer number and units consumed: ");
    if (scanf("%d%d", &custno, &units) != 2 || units < 0) {
        /* scanf returns 2 only when both requested integers are read. */
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    /* Apply the rate for the slab containing the number of units used. */
    if (units <= 200) {
        /* For up to 200 units, every unit costs 0.50. */
        charge = 0.5f * units;
    } else if (units <= 400) {
        /* Charge the first 200 units at 0.50, then extra units at 0.65. */
        charge = 100.0f + 0.65f * (units - 200);
    } else if (units <= 600) {
        /* Charge the first 400 units (230.00), then extra units at 0.80. */
        charge = 230.0f + 0.8f * (units - 400);
    } else {
        /* Charge the first 600 units (390.00), then extra units at 1.00. */
        charge = 390.0f + (units - 600);
    }

    /* Print the inputs and the bill with exactly two decimal places. */
    printf("Customer No: %d consumed %d units\n", custno, units);
    printf("The total bill amount is: %.2f\n", charge);

    /* Return zero to report that the program completed successfully. */
    return 0;
}
