#include<stdio.h>

int sum()
{int a,b,sum;
printf("enter the number ");
scanf("%d%d",&a,&b);
sum=a+b;
printf("sum%d ",sum);
}
void main()
{
printf("sum of 2 no:s using a function\n");
sum();
}
