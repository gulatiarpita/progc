
#include <stdio.h>
int main() 
{
    float pr, r, t;
    float si, ci;
    printf("Enter Principal Amount: ");
    scanf("%f", &pr);
    printf("Enter Rate of Interest: ");
    scanf("%f", &r);
    printf("Enter Time: ");
    scanf("%f", &t);
    si = (pr*r*t) / 100.0;
    ci = pr* (pow((1 + r/ 100), t)) - pr;
    printf("\nSimple interest = %.2f", si);
    printf("\nCompound Interest = %.2f", ci);
    return 0;
}

