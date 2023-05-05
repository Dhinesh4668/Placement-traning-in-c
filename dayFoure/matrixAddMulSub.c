//#include <stdio.h>
//int main()
//{
//    int a[3][3], b[3][3], c[3][3], i, j,k;
//    printf("Enter elements of first matrix:\n");
//    for(i = 0; i < 3; i++)
//        for(j = 0; j < 3; j++)
//            scanf("%d", &a[i][j]);
//    printf("Enter elements of second matrix:\n");
//    for(i = 0; i < 3; i++)
//        for(j = 0; j < 3; j++)
//            scanf("%d", &b[i][j]);
//    //mu two matrices
//    for(i = 0; i < 3; i++)
//        for(j = 0; j < 3; j++)
//            c[i][j] = a[i][j]+b[i][j] * b[j][k];
//    //Printing the result
//    printf("Sum of two matrices:\n");
//    for(i = 0; i < 3; i++)
//    {
//        for(j = 0; j < 3; j++)
//            for(k=0;k<3;k++)
//            printf("%d ", c[i][j]);
//        printf("\n");
//    }
//    return 0;
//}


//anoter way
#include <stdio.h>

int main()
{
    int row1, col1, row2, col2, c, d, k, sum = 0;
    int first[10][10], second[10][10], multiply[10][10];

    printf("Enter the number of rows and columns of first matrix\n");
    scanf("%d%d", &row1, &col1);
    printf("first matrix\n");

    for (  c = 0 ; c < row1 ; c++ )
        for ( d = 0 ; d < col1 ; d++ )
            scanf("%d", &first[c][d]);

    printf("Enter the number of rows and columns of second matrix\n");
    scanf("%d%d", &row2, &col2);

    if ( col1 != row2 )
        printf("Matrices can't be multiplied.\n");
    else
    {
        printf("Enter the elements of second matrix\n");

        for ( c = 0 ; c < row2 ; c++ )
            for ( d = 0 ; d < col2 ; d++ )
                scanf("%d", &second[c][d]);

        for ( c = 0 ; c < row1 ; c++ )
        {
            for ( d = 0 ; d < col2 ; d++ )
            {
                for ( k = 0 ; k < row2 ; k++ )
                {
                    sum = sum + first[c][k]*second[k][d];
                }

                multiply[c][d] = sum;
                sum = 0;
            }
        }

        printf("Product of entered matrices:-\n");

        for ( c = 0 ; c < row1; c++ )
        {
            for ( d = 0 ; d < col2 ; d++ )
                printf("%d\t", multiply[c][d]);

            printf("\n");
        }
    }

    return 0;
}