#include <stdio.h>

int main() {
    float radius, area, circumference;
    const float Pi = 3.141;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = Pi * radius * radius;
    circumference = 2 * Pi * radius;
   
    printf("\nArea of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}
