#include <stdio.h>

void main()
{
    float d[2], area;

    printf("Enter first diagonal: ");
    scanf("%f", &d[1]);

    printf("Enter second diagonal: ");
    scanf("%f", &d[3]);

    area = (d[1] * d[3]) / 2;

    printf("Area of rhombus = %f", area);
}