// PROGRA TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE ARRAYS
#include <stdio.h>
int main()
{
    int m[10], s[10], i, j;
    printf("enter the number for 1st array :");
    for (i = 0; i < 10; ++i)
    {
        scanf("%d", &m[i]);
    }
    printf("enter the number for 2nd array :");
    for (j = 0; j < 10; ++j)
    {
        scanf("%d", &s[j]);
    }

    printf("BEFORE SWAPPING\n");
    printf("1st array: ");
    for (i = 0; i < 10; ++i)
    {
        printf("%d ", m[i]);
    }
    printf("\n 2nd array: ");
    for (j = 0; j < 10; ++j)
    {
        printf("%d ", s[j]);
    }
    printf("\n AFTER SWAPPING \n");
    printf("2nd array: ");
    for (i = 0; i < 10; ++i)
    {
        int x = m[i];
        x = s[i];
        s[i] = x;
        printf("%d ", s[i]);
    }
    printf("\n1st array: ");
    for (i = 0; i < 10; ++i)
    {
        printf("%d ", m[i]);
    }
    return 0;
}