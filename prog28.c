#include<stdio.h>
int main ()
{
float salary,bonuspercentage,bonus,finalsalary;
 scanf("%f",&salary);
 printf("salary=%f\n",salary);
 scanf("%f",&bonuspercentage);
 printf("bonuspercentage=%f\n",bonuspercentage);
 bonus=(salary*bonuspercentage)/100;
 finalsalary=salary+bonus;
 printf("bonus=%.2f\n",bonus);
 printf("finalsalary=%.2f\n",finalsalary);
 return 0;
 }
