#include <stdio.h>
int main()
{
    float length, breadth;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter breadth: ");
    scanf("%f", &breadth);

    printf("Perimeter of rectangle is %.2f\n", 2 * (length + breadth));
    printf("Area of rectangle is %.2f\n", length * breadth);

    return 0;
}