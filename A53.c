#include <stdio.h>
int main()
{
    int i, j, r, k;
    printf("enter the value:"); // r must be odd for perfect diamond method
    scanf("%d", &r);
    int nsp = r / 2; // number od space
    int nos = 1;     // number of star
    int ml = (r / 2) + 1;
    for (i = 1; i <= r; i++)
    {
        // for (k = r / 2; k >= i; k--)

        for (k = 1; k <= nsp; k++)
        {
            printf(" ");
        }

        for (j = 1; j <= nos; j++)
        {
            printf("*");
        }
        if (i < ml)
        {
            nsp--;
            nos += 2;
        }
        else
        {
            nsp++;
            nos -= 2;
        }
        printf("\n");
    }
}

