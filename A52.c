#include <stdio.h>
int main()
{
    int i, j, r, k;
    printf("enter the value:");
    scanf("%d", &r);
    for (i = 1; i <= r; i++)
    {

        // for (k = 1; k <= r - i; k++)
        for (k = r; k >= i; k--)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        int a = i - 1;
        for (j = 1; j <= i - 1; j++)
        {
            printf("%d", a);
            a--;
        }

        /*for (j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }*/

        printf("\n");
    }
}