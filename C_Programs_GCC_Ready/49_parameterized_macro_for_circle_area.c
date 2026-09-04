/* Parameterized macro for circle area (printed page 140). */
#include <stdio.h>

#define AREA(r) (3.14f * (r) * (r))

int main(void)
{
    float radius;

    printf("Enter the radius: ");
    if (scanf("%f", &radius) != 1 || radius < 0.0f) {
        return 1;
    }

    printf("Area of the circle is %f\n", AREA(radius));
    return 0;
}
