// PRINT A PATTERN OF HALF PYRAMID
#include <stdio.h>
int main()
{
    int i, j, num;
    printf("enter the number you want to enter:");
    scanf("%d", &num);

    for (i = 0; i < num; ++i)
    {
        int a = 65;
        // printf("*\n"); i want i+alphabet increase in every line
        for (j = 0; j < i + 1; j++)
        {

            printf("%c ", a);
            a++;
        }
        printf("\n");
    }
}