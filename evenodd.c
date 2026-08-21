#include <stdio.h>

int main()
{
    int A;

    printf("Enter the integer A: ");
    scanf("%d", &A);

    if (A % 2 == 0)
    {
        printf("The integer %d is even.\n", A);
    }
    else
    {
        printf("The integer %d is odd.\n", A);
    }

    return 0;
}
