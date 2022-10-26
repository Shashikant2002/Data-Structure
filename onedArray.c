#include <stdio.h>
// #include <conio.h>

int main()
{
    int i, j, arr[5];

    printf("Enter a Value of Array \n \n");

    for (i = 0; i < 5; i++)
    {
        printf("Enter a Value of Arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n\n");
    printf("Array is: \n");

    for (j = 0; j < 5; j++)
    {
        printf("[%d] = %d \n", j, arr[j]);
    }

    return 0;
    // getch();
}