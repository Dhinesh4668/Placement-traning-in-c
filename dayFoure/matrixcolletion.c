#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3], i, j;
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);
    //Adding two matrices
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            c[i][j] = a[i][j] + b[i][j];
    //Printing the result
    printf("Sum of two matrices:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
}
