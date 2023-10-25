#include<stdio.h>
#include<string.h>
int main ()
{
    char a[1000];
    gets(a);
    int size = strlen(a);
    int mid = size/2;
    int flag = 1;

    for(int i=0;i<mid;i++)
    {
        if(a[i] != a[size-i-1])
        {
           flag = 0;
           break;
        }
        
    }

    if(flag)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}