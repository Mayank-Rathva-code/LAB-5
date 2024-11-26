// PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT.

#include <stdio.h>
int main()
{
    int matrix[3][3], min, max;

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Initialize min and max with the first element
    min = max = matrix[0][0];

    // Find min and max values
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }
    }

    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);

    return 0;
}