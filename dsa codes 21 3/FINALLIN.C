#include<stdio.h>
#include<conio.h>
#define SIZE 5
//gayu final correct linearq
int q[SIZE],front=-1,rear=-1;
void enq();
void deq();
void traverse();
void count();
void small();
int main()
{
	int ch;
	clrscr();
	while(1)
	{       printf("\n****** Operations on Queue ******");
		printf("\n1enq 2.deq 3.traverse 4.count 5.exit 6.small");
		printf("\nEnter choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			enq();
			break;
			case 2:
			deq();
			break;
			case 3:
			traverse();
			break;
			case 4:
			count();
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
void enq()
{
	int ele;
	if(rear==SIZE-1)
	{
		printf("\nfull");
	}
	else
	{
	printf("\nenter element :");
	scanf("%d",&ele);
		if(front==rear)
		{
			front=0;
			rear++;

			printf("\nsucess");
		}
			else
			{
			       rear++;
			       printf("\nsucess");

			}
			q[rear]=ele;
	}
}
void deq()
{
	int item;
	if(front==-1 && rear==-1)
	{
		printf("\nempty q");

	}
	else
	{ 	item=q[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front++;
		}
		printf("\ndeleted element :%d",item);
	}

}
void traverse()
{
	int i;
	if(front==-1 && rear==-1)
	{	printf("\nempty q");
	}
	else
	{	for(i=front;i<=rear;i++)
		{
			printf("\n%d",q[i]);
		}
	}
}
void count()
{	int i,counts=0;
	if(front==-1 && rear==-1)
	{	printf("\nempty q");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			counts++;
		}

	printf("\nElements in queue :%d",counts);
	}
}
void small()
{
	int smal,i;
	smal=q[front];
	if(front==-1 && rear==-1)
	{	printf("\nempty q");
	}
	else

	{
		for(i=front;i<=rear;i++)
		{  if(smal>q[i])
			{
				smal=q[i];
			}

		}

	printf("\nsmallest element :%d",smal);
	}

}


