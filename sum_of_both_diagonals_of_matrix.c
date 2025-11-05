#include <stdio.h>

int main()
{
    int a;

    printf("enter number of rows/columns:");
    scanf("%d", &a);

    int mat[a][a];
    int sum = 0;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("enter number in (%d,%d):", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("matrix is-\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d\t", mat[i][j]);

            if ((i == j) || ((i + j) == (a - 1)))
            {
                sum += mat[i][j];
            }
        }

        printf("\n");
    }

    printf("sum is %d", sum);

    printf("\nAJAY YADAV,125113041");
    return 0;
}