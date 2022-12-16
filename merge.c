#include<stdio.h>

void main()
{

int a[50],b[50],c[100],m,n,i,j,k=0;

printf("\n enter the size of 1st array:");
scanf("%d",&m);

printf("\n enter the elements of1st array(sorted array):\n");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}

printf("\n enter the size of 2nd array:");
scanf("%d",&n);

printf("\n enter the elements  of 2nd array(sorted array):\n");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}

for(i=0;i<m;i++)
printf("%d",a[i]);

for(j=0;j<n;j++)
printf("%d",b[i]);

i=0;
j=0;

while(i<m && j<n)
{

if(a[i]<b[j])
{
c[k]=a[i];
i++;
}

else
{
c[k]=b[j];
j++;
}

k++;
}

if(j>=n)
{
while(i<m)
{
c[k]=a[i];
i++;
k++;
}
}
if(i>=m)
{
while(j<n)
{
c[k]=b[j];
j++;
k++;
}
}
printf("array elements after merge sort\n");
for(i=0;i<m+n;i++)
{
printf("%d\t",c[i]);
}
}
