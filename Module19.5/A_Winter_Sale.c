#include<stdio.h>
float OriginalPrice(int discount,int discountprice)
{
   float dis = 1-(discount/100.0); // type casting;
   float Realprice = discountprice/dis;
   return Realprice;
}
int main ()
{
    int Discnt,DisPrice;
    scanf("%d %d",&Discnt,&DisPrice);
    
    float ans = OriginalPrice(Discnt,DisPrice);
    printf("%0.2f",ans);
    
    return 0;
}