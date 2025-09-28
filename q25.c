#include <stdio.h>

int main() {
    int a, b, result;
    char op;

    printf("Enter two numbers and an operator (+, -, *, /, %): ");
    scanf("%d %d %c", &a, &b, &op);

    switch (op) {
        case '+':
            result = a + b;
            printf("%d\n", result);
            break;

        case '-':
            result = a - b;
            printf("%d\n", result);
            break;

        case '*':
            result = a * b;
            printf("%d\n", result);
            break;

        case '/':
            if (b != 0) {
                result = a / b;
                printf("%d\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;

        case '%':
            if (b != 0) {
                result = a % b;
                printf("%d\n", result);
            } else {
                printf("Error: Modulus by zero!\n");
            }
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
