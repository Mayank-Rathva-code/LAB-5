/*An election is contested by 5 candidates. The candidate is numbered are 1 to 5 and the voting is done by marking the candidate number on the
ballot paper. Write a program to read the ballots and count the votes cast for each candidate using an array variable count. In case, a number,
read is outside the range 1 to 5,the ballot should be considered as a ‘spoilt ballot’ and the program should also count the number of spoilt ballots.*/
#include <stdio.h>
int main()
{
    int ballots[20];
    for (int i = 1; i <= 5; i++)
    {
        printf("ENTER %d FOR CANDIDATE %d\n", i, i);
    }
    printf("\n<let's election begin>\n");
    for (int i = 0; i < 20; i++)
    {
        printf("enter your vote:");
        scanf("%d", &ballots[i]);
    }
    int count[6] = {0};
    for (int i = 0; i < 20; i++)
    {
        int num = ballots[i];
        if (num >= 1 && num <= 5)
        {
            count[num]++;
        }
        else
        {
            count[0]++;
        }
    }
    for (int i = 1; i <= 5; i++)
    {
        printf("TOTAL VOTE OF CANDIDATE %d = %d vote\n", i, count[i]);
    }
    printf("TOTAL NUMBER OF SPOILET VOTE =%d\n", count[0]);
}