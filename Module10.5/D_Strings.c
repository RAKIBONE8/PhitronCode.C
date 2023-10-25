#include<stdio.h>
#include<string.h>
int main ()
{
    char a[1000];
    gets(a);
    int size1 = strlen(a);

    char b[1000];
    gets(b);
    int size2 = strlen(b);

    printf("%d %d\n",size1,size2);

    if(size1>0 && size2>0)
    {
    printf("%s%s\n",a,b);

    int temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s",a,b);
    }
    
    return 0;
}