#include <stdio.h>

int main()
{
    int t1, t2, t3; // Оголошуємо три змінні для часу, за який гості можуть з'їсти торт

    printf("Input 3 values:\n"); // Просимо користувача ввести три значення часу
    scanf("%d%d%d", &t1, &t2, &t3); // Зчитування значень з клавіатури
    while (t1 > 10000 && t1 <= 0 || t2 > 10000 && t2 <= 0 || t3 > 10000 && t3 <= 0 ) // Перевірка всіх значень (чи задовольняють вони умови задачі)
    {
        printf("!!!! Some of values program can't use (values must be greater than 0 and less than 10000) !!!!\n"); // Вказання причини, що саме не підходить в значеннях користувача
        printf("*Just try to enter another values*\n"); // Текст підказка
        printf("Input 3 values:\n");
        scanf("%d%d%d", &t1, &t2, &t3);
    }
    

    float result = (float)(t1 + t2 + t3) / 3; // Обчислення результату за формулою, вказаною в теоретичних відомостях
    printf("Time for eating cake: %.2f hours", result); // Вивід результату на екран
}