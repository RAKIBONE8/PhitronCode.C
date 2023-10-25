#include<stdio.h>
#include<string.h>
int main ()
{
    int n;
    scanf("%d",&n);

    char a[n+1];
    char b[n+1];
    scanf("%s %s",a,b);

    int val = strcmp(a,b);
    printf("%d",val);  // -1 means left value is small
                       //  0 means both values are same
                       //  1 means right value is small

    /*
    int i=0;
    while(1)
    {
        // Base condition to check null
        if(a[i] == '\0' && b[i] == '\0')
        {
           printf("same\n");
           break;
        }
        else if(a[i] == '\0')
        {
            printf("A small\n");
            break;
        }
        else if(b[i] == '\0')
        {
            printf("B small\n");
            break;
        }

        //condition for comparision
        if(a[i] == b[i])
        {
            i++;
        }
        else if(b[i]>a[i])
        {
            printf("B is large");
            break;
        }
        else
        {
            printf("A is large");
            break;
        }

    }
    */
    return 0;
}