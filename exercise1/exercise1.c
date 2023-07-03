#include <stdio.h>

int main()
{
    int t1, t2, t3; // Оголошуємо три змінні для часу, за який гості можуть з'їсти торт

    printf("Input 3 values:\n"); // Просимо користувача ввести три значення часу
    scanf("%d%d%d", &t1, &t2, &t3); // Зчитування значень з клавіатури

    if (t1 <= 0 || t1 > 10000)
    {
        printf("Invalid input! Time values must be between 1 and 10000.\n");

        do {
            printf("Input value for t1: ");
            scanf("%d", &t1);
        } while (t1 <= 0 || t1 > 10000);
    }

    if (t2 <= 0 || t2 > 10000)
    {
        printf("Invalid input! Time values must be between 1 and 10000.\n");

        do {
            printf("Input value for t2: ");
            scanf("%d", &t2);
        } while (t2 <= 0 || t2 > 10000);
    }
    
    if (t3 <= 0 || t3 > 10000)
    {
        printf("Invalid input! Time values must be between 1 and 10000.\n");

        do {
            printf("Input value for t3: ");
            scanf("%d", &t3);
        } while (t3 <= 0 || t3 > 10000);
    }
    
    float total_time = (t1 + t2 + t3) / 3; // Переведення значень в години за формолую, вказаною в теоретичних відомостях
    float result = 1 / total_time;
    printf("Time for eating cake: %.2f hours", result); // Вивід результату на екран
}