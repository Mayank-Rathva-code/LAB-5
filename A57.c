// PROGRAM TO READ N NOS AND FINDOUT MAX AND SECOND MAX.
#include <stdio.h>
int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        int a = i + 1;
        printf("%d) enter the number:", a);
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        printf(" array wii be: %d  ", arr[j]);
    }
    int max = arr[0];

    for (int i = 1; i < 5; i++)
    {
        int b = arr[i];

        if (b > max)
        {
            max = b;
        }
    }
    int secmax = arr[0];
    for (int i = 1; i < 5; i++)
    {
        int b = arr[i];

        if (max > b && b > secmax)
        {
            secmax = b;
        }
    }
    printf("\nmax number is %d\n", max);
    printf("secmax number is %d", secmax);
}