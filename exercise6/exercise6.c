#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2;

    printf("Value x1: ");
    scanf("%f", &x1);
    printf("Value y1: ");
    scanf("%f", &y1);
    printf("Value x2: ");
    scanf("%f", &x2);
    printf("Value y2: ");
    scanf("%f", &y2);

    float dx = x2 - x1;
    float dy = y2 - y1;

    float result = sqrt(pow(dx,2) + pow(dy, 2));

    printf("Vector's lenth: %.6f", result);
}