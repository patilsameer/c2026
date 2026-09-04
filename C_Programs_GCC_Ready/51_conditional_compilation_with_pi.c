/* Conditional compilation with PI (printed page 143). */
#include <stdio.h>

#ifndef PI
#define PI 3.14f
#endif

int main(void)
{
    float radius;

    printf("Enter the radius: ");
    if (scanf("%f", &radius) != 1 || radius < 0.0f) {
        return 1;
    }

    printf("The area of the circle is %.2f\n", PI * radius * radius);
    return 0;
}
