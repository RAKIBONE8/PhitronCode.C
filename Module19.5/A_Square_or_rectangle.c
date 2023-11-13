#include<stdio.h>
int main ()
{
    int testCase;
    scanf("%d",&testCase);
    while(testCase>0)
    {
        int a,b;
        scanf("%d %d",&a,&b);

        if(a == b)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
        testCase--;
    }
    return 0;
}