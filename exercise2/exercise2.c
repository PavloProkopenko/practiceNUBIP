#include <stdio.h>

int main()
{
    int count_of_values = 0; // Оголошення змінної, яка буде отримувати кількість чисел

    printf("How many numbers do you want to input?\nValue:"); // Підказка для користувача, що йому треба ввести
    scanf("%d", &count_of_values);

    int *array =(int*)malloc(count_of_values * sizeof(int)); // виділення пам'яті для масиву значень, куди будуть записані числа користувача

    for (int i = 0; i < count_of_values; i++)
    {
        
    }
    

    free(array);
}