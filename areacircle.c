#include <stdio.h>
int main() {
    int rad;
    float area;

    printf("Enter the radius of the circle: ");
    scanf("%d", &rad);

    area = 3.14 * rad * rad;

    printf("Area of the circle is: %f\n", area);
    printf("Perimeter of the circle is: %f\n",2*3.14*rad);
    return 0;
}