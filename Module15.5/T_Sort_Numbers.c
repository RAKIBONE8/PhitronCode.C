#include<stdio.h>
void order(int x,int y, int z)
{
    int temp;
    if (x > y)
    {
        temp = x;
        x = y;
        y = temp;
    }

    if(y>z)
    {
        temp = y;
        y = z;
        z = temp;
    }

    if(x>y)
    {
        temp = x;
        x = y;
        y = temp;
    }

    printf("%d\n%d\n%d\n",x,y,z);
    
}
int main ()
{
     int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    order(a,b,c);
    printf("\n");
    printf("%d\n%d\n%d",a,b,c);
    return 0;
}