#include<stdio.h>
#include<string.h>
int main ()
{
    int n;
    scanf("%d",&n);

    char a[1000];

    for(int i=0;i<n;i++)
    {
        scanf("%s",a);
        int size = strlen(a);

        if(size>10)
        {
            printf("%c",a[0]);
            printf("%d",size-2);
            printf("%c\n",a[size-1]);
        }
        else
        {
            printf("%s\n",a);
        }
    }
    return 0;
}