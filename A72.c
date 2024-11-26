// Write a program in C to rotate an array by N positions.
#include <stdio.h>
void rotate1(int x[], int y) // function for shift one digit in array
{
    int temp = x[0];
    int m = y - 1;
    for (int i = 0; i <= m; i++)
    {
        x[i] = x[i + 1];
    }
    x[m] = temp;
}
void rotate22(int x[], int y, int n) // function for n times one shift of array
{
    for (int i = 1; i <= n; i++)
    {
        rotate1(x, y);
    }
}
int main()
{
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int no;
    printf("enter the value of N by which array rotate;");
    scanf("%d", &no);
    int countdigit = sizeof(num) / sizeof(num[0]);
    // printf("enter the value of N by which array rotate %d\n", countdigit);
    rotate22(num, countdigit, no);
    printf("after the rotation of N digit\n");
    for (int i = 0; i < countdigit; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}