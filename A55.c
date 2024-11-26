// PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NUMBER OFF ODD AND TOTAL NO. OF EVEN ELEMENT
#include <stdio.h>
int main()
{
    int m[5], i, sum1 = 0, sum2 = 0, j;
    printf("enter the element:");
    for (i = 1; i <= 5; ++i)
    {
        scanf("%d", &m[i]);
    }
    for (j = 1; j <= 5; ++j)
    {
        int x = m[j];
        if (x % 2 != 0)
        {
            sum1 += x; //odd count
        }
        else
        {
            sum2 += x; //even count
        }
    }
    printf("sum of odd number of array is %d ", sum1);
    printf("\nsum of even number of array is %d", sum2);
}