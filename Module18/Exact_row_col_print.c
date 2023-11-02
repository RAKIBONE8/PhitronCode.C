#include<stdio.h>
int main ()
{
    int row,col;
    scanf("%d %d",&row,&col);

    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // For the Exact row;

    /*
    int Exatrow;
    scanf("%d",&Exatrow);
    for (int i = 0; i < col; i++)
    {
        printf("%d ", a[Exatrow][i]);
    }
    */

   // For the exact col;
   int Exactcol;
   scanf("%d",&Exactcol);
   for(int i =0;i<row;i++)
   {
      printf("%d ", a[i][Exactcol]);
   }

    return 0;
}