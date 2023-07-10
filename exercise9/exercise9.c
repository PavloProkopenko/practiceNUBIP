#include <stdio.h>
#include <math.h>

int minimum_steps(unsigned long x, unsigned long y);

int main()
{
    unsigned long x, y;

    printf("Enter the value of x: ");
    scanf("%lu", &x);
    while (x < 0 || x > pow(2, 31))
    {
        printf("!!!! Invalid value for x !!!!\n*Value must be greater or equal 0 and less than 2^31*\n");
        printf("Enter the value of x: ");
        scanf("%lu", &x);
    }
    

    printf("Enter the value of y: ");
    scanf("%lu", &y);
    while (y < 0 || y > pow(2, 31))
    {
        printf("!!!! Invalid value for y !!!!\n*Value must be greater or equal 0 and less than 2^31*\n");
        printf("Enter the value of y: ");
        scanf("%lu", &y);
    }

    if (y < x)
    {
        printf("Value Y must be greater than value X");
        return -1;
    }
    
    int steps = minimum_steps(x, y);

    printf("Minimum steps: %d\n", steps);

    return 0;
}

int minimum_steps(unsigned long x, unsigned long y)
{
    unsigned long diff = y - x;
    unsigned long root = (unsigned long)sqrt(1 + 8*diff);
    unsigned long base = (root - 1) / 2;

    if (base * (base + 1) / 2 == diff) {
        return base;
    } else if (base * (base + 1) / 2 + base + 1 >= diff) {
        return base + 1;
    } else {
        return base + 2;
    }
}