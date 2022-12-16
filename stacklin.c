#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>
struct node
{
int data;
struct node *next;
};
struct node *top=0;
void main()
{
int choice,value;
printf("\n:stack using linked list:\n");
do
{
printf("\n-------menu------\n");
printf("\n1.push\n2.pop\n3.display\n4.exit\n");
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("\nenter the value to be insert \n");
scanf("%d",&value);
push( value);
break;
case 2:pop();
break;
case 3:display();
break;
case 4:exit(0);
default:printf("wrong entry");
}
}
while(choice!=4);
}
void push(int value)
{
struct node*newnode;
newnode=(struct node*) malloc(sizeof(struct node));
newnode->data=value;
if(top==0)
{
newnode->next=0;
top=newnode;
}
else 
{newnode->next=top;
top=newnode;
}
printf("\n insertion is success%d ",top->data );
}
void pop()
{
if (top==0) 
{
printf("stack is empty"); 
}
else 
{
struct node*temp=top;
printf("delected element %d ", temp->data);
top=temp->next;
free(temp);
}
}
void display()
{
if(top==0)
{
printf("stack empty");
}

else
{
printf("elements in the stack are \n");
struct node*temp=top;
while(temp->next!=0)
{
printf("%d-->",temp->data);
temp=temp->next;
}
printf("%d--->null",temp->data);
}
}













