#include<stdio.h>
int main ()
{
    // char a[5] = {'R','a','k','i','b'};
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c", a[i]);
    // }

    char a[] = "Rakib\0";

    int Size = sizeof(a)/sizeof(char);
    printf("%d\n",Size);

    printf("%s",a);
    
    return 0;
}