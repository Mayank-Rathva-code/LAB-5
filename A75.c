/*The annual examination results of 10 students are tabulated as follows: 
Roll No.              
Subject1          
Subject2                          
Subject3 
Praveen Kumar Chandaliya, DoAI 
. 
. 
. 
.____________________________________________________________________ 
Write a program to read the data and determine the following: 
(a)   Total marks obtained by each student. 
(b)    The highest marks in each subject and the Roll No. of the student who 
secured it. 
(c)     
The student who obtained the highest total marks.*/

#include <stdio.h>
int max(int x[10])
{
    int maxi = x[0];
    int j=0;
    for (int i = 1; i < 10; i++)
    {
        if (maxi < x[i])
        {
            maxi = x[i];
            j = i;
        }
    }
    return j;
}
int main()
{
    int s1[10], s2[10], s3[10], r_no[10], m_t[10];
    for (int i = 0; i < 10; i++)
    {
        printf("%d) enter the marks of all 3 sub->", i+1);
        scanf("%d %d %d", &s1[i], &s2[i], &s3[i]);
        m_t[i] = s1[i] + s2[i] + s3[i];
        r_no[i] = i + 1;
    }
    int j = max(s1);
    printf("\nmax marks in sub1:%d\tAND roll no %d", s1[j], r_no[j]);
    int k = max(s2);
    printf("\nmax marks in sub2:%d\tAND roll no %d", s2[k], r_no[k]);
    int l = max(s3);
    printf("\nmax marks in sub3:%d\tAND roll no %d", s3[l], r_no[l]);
    int n = max(m_t);
    printf("\nmax total marks :%d\tAND roll no %d", m_t[n], r_no[n]);
    return 0;
}