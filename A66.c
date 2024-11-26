// PROGRAM TO READ A 3*3 MATRIX AND ADD THEIR VALUE AND STORE THEM IN THIRD MATRIX.
#include <stdio.h> //header file
int main() //main function
{
    int a[3][3]; 
    printf("Enter elements of  1st matrix:\n");
    for (int i = 0; i < 3; i++) //element inserting using for loop
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    int b[3][3];
    printf("Enter elements of 2nd matrix:\n");
    for (int i = 0; i < 3; i++) //element inserting using for loop
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //now sum of two array elements in third array
    int sum[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j]; 
        }
    }
    printf("After adding two matrix,new matrix=\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
