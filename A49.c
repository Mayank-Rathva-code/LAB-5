#include <stdio.h>
int main()
{
    int i, j, r, k;
    printf("enter the value:");
    scanf("%d", &r);
    for (i = 1; i <= r; i++)
    {
        for (k = 1; k <= r - i; k++) // for(k=r;k>=i;k--) also valid
        {
            printf(" ");
        }
        for (j = 0; j < i ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}