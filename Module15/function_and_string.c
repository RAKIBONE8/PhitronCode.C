#include<stdio.h>
#include<string.h>
void fun(char arr[]) // for string we don't need the size ;
{
   printf("%d",strlen(arr));
}
int main ()
{
    char arr[6] = "hello";
    fun(arr);
    
    return 0;
}