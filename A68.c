// PROGRAM TO READ A 3*3 MATRIX AND MULTIPLY THEIR VALUE AND STORE THEM IN THIRD MATRIX.

#include <stdio.h> //header file

int main() // main function
{
    int a[3][3];
    printf("Enter elements of  1st matrix:\n"); // inserting elements in array 1 using for loop
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    // making array 2 using for loop
    int b[3][3];
    printf("Enter elements of 2nd matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    // store msultiplicstion of 2 matrix elemets in 3rd matrix
    int resultant_matrix[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            resultant_matrix[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                resultant_matrix[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", resultant_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}