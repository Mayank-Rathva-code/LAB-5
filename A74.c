/* Given are one dimensional arrays A and B which are sorted in ascending order.Write a program to merge them into a single sorted array C that
contains every item form array A and B, in ascending order*/
#include <stdio.h>
//FUNCTION FOR FORMATION OF ARRAY
void loop(int x[], int size)
{
    printf("<let's begin element inserting>\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &x[i]);
    }
    return;
}
//FUNCTION OF BUBBLE SORT FOR SORTING OF ELEMENTS
void sorted(int x[], int n) // n size of array
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (x[j + 1] < x[j])
            {
                //SWAPPING OF ELEMENTS
                int temp = x[j+1];
                x[j+1] = x[j];
                x[j] = temp;
            }
        }
    }
    return;
}
int main()
{
    int n1;
    printf("enter number of element you want to insert in loop A-> ");
    scanf("%d", &n1);
    int A[n1];
    loop(A, n1);
    int n2;
    printf("\nenter number of element you want to insert in loop B-> ");
    scanf("%d", &n2);
    int B[n2];
    loop(B, n2);
    
    sorted(A, n1); //FUNCTION CALL
   
    sorted(B, n2); //FUNCTION CALL
    int size = n1 + n2;
    int C[size];
    int i = 0, j = 0;
    for (i = 0, j = n1; i < n1, j < size; i++, j++)
    {
        C[i] = A[i];
        C[j] = B[i];
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", C[i]);
    }
    sorted(C, size);
    printf("\n<sorting of merge array will be print below>\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", C[i]);
    }
}