#include<stdio.h>
#include<string.h>
int is_palindrome(char arr[]) 
{
    int length = strlen(arr);
    int mid = length/2;
    int flag = 0;
    if(length == 1)
    {
        return 1;
    }
    for(int i=0;i<mid;i++)
    {
        if (arr[i] == arr[length-i-1])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            return flag;
        }
    }
    return flag;
}    
int main()
{
    char a[10001];
    scanf("%s",a);

    int result = is_palindrome(a);
    if(result == 0)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }

    return 0;
}