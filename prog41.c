#include<stdio.h>
int main()
{
int a,b;
scanf("%d %d",&a,&b);
switch(a,b){
case 1: printf("addition=%d",a+b);
break;
case 2: printf("subtraction=%d",a-b);
break;
case 3: printf("multiplication=%d",a*b);
break;
case 4: printf("division=%d",a/b);
break;
case 5: printf("remainder=%d",a%b);
break;
default: printf("not in case 12345");
}
}
