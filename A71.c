/*Write a program in C to find the pivot element of a sorted and rotated array using binary search. Pivot element is the only element in input array which is
smaller than its previous element. A pivot element divided a sorted rotated array into two monotonically increasing array.*/

#include <stdio.h>
int main()
{
    int n;
    printf("ente the size of array:");
    scanf("%d", &n);
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
}
