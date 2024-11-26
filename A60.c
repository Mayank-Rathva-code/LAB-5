//selection sort program
#include <stdio.h>
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
        int min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    printf("\n<after sorting of array>");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", arr[i]);
    }
    return 0;
}