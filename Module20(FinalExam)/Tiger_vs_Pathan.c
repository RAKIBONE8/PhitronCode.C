#include<stdio.h>
int main ()
{
    int testcase;
    scanf("%d",&testcase);

    while(testcase>0)
    {
        int n;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        int cntT = 0;
        int cntP = 0;

        for(int i=0;i<n;i++)
        {
            if(s[i] == 'T')
            {
               cntT++;
            }
            else if(s[i] == 'P')
            {
                cntP++;
            }
        }

        if(cntP == cntT)
        {
            printf("Draw\n");
        }
        else if (cntP > cntT)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Tiger\n");
        }
        testcase--;
    }
    return 0;
}