#include<stdio.h>
#include<conio.h>
#define size 4

int stack[size],top=-1;
void push();
void pop();
void traverse();

void main()
{
int choice;
clrscr();


	while(1)
	 {	printf("\n1.Push 2.Pop 3.Traverse 4.Exit ");
		printf("\nEnter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				traverse();
				break;
			case 4:
				exit(0);
				break;

	      }
      }

}
void push()
{
	int ele;
	if(top==size-1)
		printf("\nStack overflw");
	else
	{
		printf("\nEnter element to insert ");
		scanf("%d",&ele);
		top++;
		stack[top]=ele;
	}
}

void traverse()
{
	int i;
	for(i=top;i>=0;i--)
		printf("\n%d",stack[i]);
}
void pop()
{  	int x;
	if(top==-1)
	{	printf("\nStack underflow");
	}
	else
	{	x=stack[top];
	printf("\nDeleted element : %d",x);
	top--;
	}

}