#include<stdio.h>
int main()
{
int x,y,z;
scanf("%d %d %d ",&x,&y,&z);
printf("No.of copies=%d",x);
printf("\nSelling price=%d",x*y);
printf("\ncostprice=%d",x*z);
printf("\nprofit=%d",((x*y)-(x*z)-100));
return 0;
}
