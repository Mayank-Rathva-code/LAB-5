// print pattern half pyramid
#include <stdio.h>
int main()
{
    int i, j, r, k;
    printf("enter the value:");
    scanf("%d", &r);
    for (i = 1; i <= r; i++)
    {
        for (k = r - 1; k >= i; k--) //for(k=1;k<=r-i;k++)
        { 
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {

            printf("%d",j);
        }
        printf("\n");
        
    }
}