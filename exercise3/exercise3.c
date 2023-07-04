#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int p;

    printf("Input number\n*This number must be less or equal 30*\nYour value: ");
    scanf("%d", &p);

    while (p < 0 || p > 30)
    {
        printf("!!! Invalid number !!!\n*This number must be less or equal 30*\nYour value: ");
        scanf("%d", &p);
    }
    
    int result = pow(2, p) - (p - 2);

    printf("You can make %d numbers", result);

    return 0;
}