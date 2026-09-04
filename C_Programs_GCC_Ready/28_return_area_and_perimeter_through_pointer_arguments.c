/* Return area and perimeter through pointer arguments (printed page 64). */
#include <stdio.h>

static void areaperi(float radius, float *area, float *perimeter);

int main(void)
{
    float radius;
    float area;
    float perimeter;

    printf("Enter radius: ");
    if (scanf("%f", &radius) != 1 || radius < 0.0f) {
        return 1;
    }

    areaperi(radius, &area, &perimeter);
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);
    return 0;
}

static void areaperi(float r, float *a, float *p)
{
    const float pi = 3.14f;
    *a = pi * r * r;
    *p = 2.0f * pi * r;
}
