# include <stdio.h>
int b[50],top=0,i,item,n,ch;

void push();
void pop();
void display();

void main()
{
printf("\n enter the size of the stack");
scanf("%d",&n);
printf("\n 1.push\n 2.pop\n 3.display \n4.exit");
printf("\n stack implementation using array");
do
{    
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{ 
case 1:push();
      break;
case 2:pop();
      break;
case 3:display();
      break;
case 4:printf("exit point\n"); 
      exit(0);
      break;
default:printf("wrong entery  \n"); 
}
}     
while(ch!=4);
}
void push()
{
if(top>n)
{
printf("stack overflow\n");
}
else
{
printf("enter the item to be inserted\n");
scanf("%d",&item);
top++;
b[top]=item;
}
}
void pop()
{
if(top<=0)
{
printf("stack underflow\n");
}
else
{
printf("\n deleted element is %d",b[top]);
top--;
}
}
void display()
{
if(top>=0)
{
printf("\n the elements in stack are");
for(i=top;i>=0;i--)
{    
printf("%d \t",b[i]);
}
}

else
{
printf("no elements\n");
}
}






