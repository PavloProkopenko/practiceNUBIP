#include <stdio.h>
#include <math.h>

unsigned minimum_steps(unsigned int x, unsigned int y);

int main()
{
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    int steps = minimum_steps(x, y);

    printf("Minimum steps: %d\n", steps);

    return 0;
}

unsigned minimum_steps(unsigned int x, unsigned int y)
{
    unsigned int diff = y - x;
    unsigned int root = (unsigned int)sqrt(1 + 8*diff);
    unsigned int base = (root - 1) / 2;

    if (base * (base + 1) / 2 == diff) {
        return base;
    } else if (base * (base + 1) / 2 + base + 1 >= diff) {
        return base + 1;
    } else {
        return base + 2;
    }
}

