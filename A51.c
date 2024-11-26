
#include <stdio.h>
int main()
{
    int num, i, j;
    printf("enter the number:");
    scanf("%d", &num);
    int x;
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            if (i == j)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
}
