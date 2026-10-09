#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a<b&&a<c)
{
printf("a is smallest among three numbers");
}
else if(b<c&&b<a)
{
printf("b is smallest among three numbers");
}
else
{
printf("c is smallest among three numbers");
}
return 0;
}
