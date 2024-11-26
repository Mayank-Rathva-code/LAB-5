// PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE  ADDITION OF THOSE ARRAYS INTO THIRD
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
    int sum = 0;
    int l[10], k;
    printf("3rd array wil be:\n");
    for (i = 0, j = 0, k = 0; i < 10, j < 10, k < 10; ++i, ++j, ++k)
    {
        l[k] = m[i] + s[j];
        sum = l[k];
        printf("%d\n", sum);
    }
    return 0;
}
