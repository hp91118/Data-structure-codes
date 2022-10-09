#include<stdio.h>
#include<conio.h>
#define SIZE 5
//gayu final and correct stack code
int stack[SIZE],top=-1;
void push();
void pop();
void traverse();
void peek();
void small();
int main()
{
	int ch;
	clrscr();
	while(1)
	{       printf("\n****** Operations on stack ******");
		printf("\n1.push 2.pop 3.traverse 4.peek 5.exit 6.small");
		printf("\nEnter choice :");
		scanf("%d",&ch);
		switch(ch)
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
			peek();
			break;
			case 5:
			exit(0);
			case 6:
			small();
			break;

			default:
			printf("\nenter valid choice");
		}
	}

}
void push()
{
	int ele;
	if(top==SIZE-1)
	{printf("\nstack ovfl");}
	else
	{

		printf("\nenter element :");
		scanf("%d",&ele);

		top++;
		stack[top]=ele;
	}

}
void pop()
{
	int item;
	if(top==-1)
	{
		printf("\nstack undfl");
	}
	else
	{
		item=stack[top];
		printf("\ndeleted element :%d",item);
		top--;
	}

}
void traverse()
{
	int i;
	for(i=top;i>=0;i--)

	{ printf("\n|");
	printf("%d",stack[i]);
	printf("|");
	}
}

void peek()
{
	if(top==-1)
	{
	printf("\nno ele at peek");

	}
	else
	{
		printf("\n%d",stack[top]);
	}
}

void small()
{
	int i,smal;
	smal=stack[0] ;
	if(top==-1)
	{
		printf("\nno elements in stack");
	}
	else
	      {
		for(i=1;i<=top;i++)
		{
			if(stack[i]<smal)
				{
		       smal= stack[i]   ;
				 }

			}
			printf("\nsmallest element :%d",smal);
	      }

}










