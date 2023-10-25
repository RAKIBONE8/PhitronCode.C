#include<stdio.h>
int main ()
{
    char a[10];

    int Size = sizeof(a)/sizeof(char);
    printf("%d",Size);
    
    /*
    for(int i=0;i<5;i++)
    {
        scanf("%c",&a[i]);
    }

    for(int i=0;i<5;i++)
    {
        printf("%c",a[i]);
    }
    */
    return 0;
}