#include<stdio.h>
#include<conio.h>
#define size 5
//gayu correct and final code
void enq();
void deq();
void traverse();
void count();
void smallest();
void largest();
void peek();
int queue[size],front=-1,rear=-1;
int main()
{
	int ch;
	clrscr();
	do
	{
		printf("\n1.enq 2.deq 3.trav 4.exit 5.count 6.smallest 7.largest 8.peek");
		printf("\nenter choice :");
		scanf("%d",&ch);
		switch (ch)
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
			exit(0);
			break;
			case 5:
			count();
			break;
			case 6:
			printf("called");
			smallest();
			break;
			case 7:
			largest();
			break;



			case 8:
			peek();
			break;

			default:
			printf("\nEnter valid choice");
		}

	}while(ch!=4);
	return 0; //do not forget
}
void enq()
{
	int ele;
	if(front==(rear+1)%size)
	{
		printf("\nFull");
	}
	else
	{       printf("\nEnter element :");
		scanf("%d",&ele);
		if(front==-1 && rear==-1)
		{
			front=0;
			rear=0;
			queue[rear]=ele;
		}
		else
		{
			rear=(rear+1)%size;
			queue[rear]=ele;
		}
	}

}
void traverse()
{
	int i;
	i=front;
	if(front==-1 && rear==-1)
		{
			printf("\nEmpty");
		}
	else
	{
		while(i!=rear)                    //rear
		{
			printf("\t%d",queue[i]);
			i=(i+1)%size;
		}
		printf("\t%d",queue[rear]); // rem

	}
}
void deq()
{
	int item;
	if(front==-1 && rear==-1)
		{
			printf("\nEmpty");
		}
	else
	{       item=queue[front];
		if(front==rear)
		{
			printf("\nDeleted element : %d",item);
			front=-1;//rem
			rear=-1;

		}
		else
		{
				printf("\nDeleted element : %d",item) ;
				front=(front+1)%size;
		}
	}

}
void count()
{
	int i,c=0;
	i=front;  //rem
	if(front==-1 && rear==-1)
		{
			printf("\nempty");
		}
	else
	{
		while(i<=rear)
		{
			c++;
			i=(i+1)%size;
		}
		printf("\nNo of elements :%d",c);
	}

}
void smallest()
{
	int i,small=0;
	printf("\nin func");
	small=queue[front];
	for(i=front;i<=rear;i=(i+1)%size)
	{
		if(queue[i]<small)

			small=queue[i];
	}
	printf("\nSmallest ele in queue: %d" ,small);
}
void largest()
{
	int i,big=0;
	big=queue[front];
	for(i=front;i<=rear;i=(i+1)%size)
	{
		if(queue[i]>big)
		{
			big=queue[i] ;
		}

	}
	printf("\nlargest ele in queue: %d" ,big);
}
void peek()
{
	if(front==-1 && rear==-1)
	{
		printf("\nempty");
	}
	else
	{
		printf("\nElement at front : %d",queue[front]);
	}
}