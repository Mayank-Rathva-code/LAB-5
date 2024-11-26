// PROGRAM TO READ A 3*3 MATRIX AND SUBTRACT THEIR VALUE AND STORE THEM IN THIRD MATRIX
#include <stdio.h>
int main()
{
    int a[3][3];
    printf("Enter elements of  1st matrix:\n");
    for (int i = 0; i < 3; i++) //inserting elements in array 1 using for loop 
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    //inserting elements in array 2 using for loop
    int b[3][3];
    printf("Enter elements of 2nd matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //array which store the difference of elements of above 2 array
    int diff[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }
    //third array print
    printf("After subtracting two matrix,new matrix=\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
    return 0;
}