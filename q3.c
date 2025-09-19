#include <stdio.n>

int main() {
    float l, b, ar, peri;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &l);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &b);
    ar = l * b;
    peri = 2 * (l + b);
    printf("\nArea of the rectangle = %.2f\n", ar);
    printf("Perimeter of the rectangle = %.2f\n", peri);

    return 0;
}
