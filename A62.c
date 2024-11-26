//PROGRAM TO REVERSE AN ARRAY.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number=");
    scanf("%d", &n);
    int arr[n];
    printf("BEFORE REVERSE\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n");

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("REVERSED ARRAY\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}