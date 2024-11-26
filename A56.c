// PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NUMBER OF POSITIVE ,NEGATIVE,AND ZERO ELEMENTS
#include <stdio.h>
int main()
{
    int m[10], i, j;
    int count1 = 0, count2 = 0, count3 = 0;
    printf("enter the number:");
    for (i = 0; i < 10; ++i)
    {
        scanf("%d", &m[i]);
    }
    for (j = 0; j < 10; ++j)

    {
        if (m[j] > 0)
        {
            count1++; // coun positive number
        }
        else if (m[j] < 0)
        {
            count2++; // negative number
        }
        else
        {
            count3++; // zero
        }
    }
    printf("\ntotal positive number:%d", count1);
    printf("\ntotal negative number:%d", count2);
    printf("\ntotal zero :%d", count3);
    return 0;
}