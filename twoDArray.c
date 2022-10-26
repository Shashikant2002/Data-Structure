#include <stdio.h>
// #include <conio.h>

int main()
{
    int i, j, k, l, arr[5][5];

    for (i = 0; i < 5; i++)
    {
        printf("\n");
        for (j = 0; j < 5; j++)
        {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    printf("Array is: \n");
    for (k = 0; k < 5; k++)
    {
        printf("\n");
        for (l = 0; l < 5; l++)
        {
            printf("%d \t", arr[k][l]);
        }
    }
    printf("\n");

    return 0;
    // getch();
}