// PROGRAM TO READ AN ARRAY AND PRINT THE OCCURRENCE OF ANY PARTICULAR ELEMENT IN THE ARRAY.
#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nenter the elements in array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x;
    printf("\nenter the number you want to count in array :");
    scanf("%d", &x);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count += 1;
        }
    }
    if (count > 0)
    {
        printf("%d is present in array %d times", x, count);
    }
    else
    {
        printf("%d is present in array %d times", x, count);
    }
    return 0;
}