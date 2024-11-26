// PROGRAM TO SORT (BUBBLE SORT) AN ARRAY.
#include <stdio.h> //header file
int main()
{
    int n;
    printf("<enter number of element want to insert in array->");
    scanf("%d", &n);
    int arr[n];
    int j = 0;
    printf("<enter the elements in the string>\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\n<after sorting of array>");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", arr[i]);
    }
    return 0;
}