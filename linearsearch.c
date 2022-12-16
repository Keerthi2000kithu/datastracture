#include<stdio.h>
void main()
{

int arr[50],n,s=0,i;

printf("enter the size");
scanf("%d",&n);


printf("enter the elements :");

for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}


for(i=0;i<n;i++)
{
s=s+arr[i];
}
printf("\n sum of arry elements :%d",s);

}
