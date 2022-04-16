#include <stdio.h>

int main()
{
    int i, j, n, left_sum = 0, right_sum = 0;
    printf("enter the size row and column of matrix:");
    scanf("%d", &n);
    int mat[n][n];
    printf("Enter the element of matrix:");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
            if (i == j)
            {
                left_sum += mat[i][j];
            }
            if (i + j == n - 1)
            {
                right_sum += mat[i][j];
            }
        }
    }
    printf("the difference in diagonal sum is:%d", left_sum - right_sum);
    return 0;
}