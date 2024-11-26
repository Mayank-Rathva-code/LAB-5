// PROGRAM TO READ A 3*3 MATRIX AND PRINT ITS TRANSPOSE
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("<MATRIX BEFORE TRANSPOSE>\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // transpose work loop
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b[i][j] = a[j][i];  
        }
    }
    printf("\n");

    printf("<TRANSPOSE MATRIX>\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}
