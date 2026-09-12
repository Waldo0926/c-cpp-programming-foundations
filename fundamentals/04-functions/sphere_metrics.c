#include <stdio.h>

#define PI 3.14159265358979323846

int main(void) {
    double radius;
    if (scanf("%lf", &radius) != 1 || radius < 0) return 1;

    const double circumference = 2.0 * PI * radius;
    const double area = PI * radius * radius;
    const double volume = 4.0 / 3.0 * PI * radius * radius * radius;
    printf("circumference: %.6f\narea: %.6f\nvolume: %.6f\n",
           circumference, area, volume);
    return 0;
}
