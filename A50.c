
#include <stdio.h>
int main()
{
    int num;
    printf("enter the number you want:");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        int a = 65 + i;
        for (int j = 0; j < i + 1; j++)
        {
            printf("%c", a);
        }
        printf("\n");
        a++;
    }
}