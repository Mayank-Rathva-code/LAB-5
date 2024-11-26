// PROGRAM TO READ ARRAY OF 10 INTEGER AND PRINT SUM OF NUMBERS
#include <stdio.h>
int main()
{
    // data_type array_name[array_size];
    int arr[10], sum = 0; // arr variable of array with 10 elements store in it
    printf("enter the number:");
    int i;
    for (i = 0; i < 10; ++i)
        scanf("%d", &arr[i]);
    for (i = 0; i < 10; ++i)
        sum += arr[i];
    printf("sum of elements of array is %d", sum);
    return 0;
}