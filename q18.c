#include <stdio.h>
int main() {
    int marks;
    printf("Enter your percentage: ");
    scanf("%d", &marks);
    if (marks >= 90) {
        printf("Grade A\n");
    }
    else if (marks >= 75) {
        printf("Grade B\n");
    }
    else if (marks >= 60) {
        printf("Grade C\n");
    }
    else if (marks >= 50) {
        printf("Grade D\n");
    }
    else {
        printf("Grade F\n");
    }

    return 0;
}
