#include<stdio.h>
int main()
{
int mark;
scanf("%d",&mark);
if(mark>=90&&mark<=100)
 printf("A grade");
else if (mark<90&&mark>=70)
 printf("B grade");
else if (mark<70&&mark>=50)
 printf("C grade");
else(mark<50&&mark>=0);
 printf("D grade");
return 0;
}

