#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time;
    float SI, CI, amount;

    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Rate");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);
    SI = (principal * rate * time) / 100;
    amount = principal *(1 + rate / 100*time);
    CI = amount - principal;
    printf("\nSimple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);
    return 0;
}