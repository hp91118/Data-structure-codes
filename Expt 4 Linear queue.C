#include<stdio.h>
#include<conio.h>
#define size 6
int queue[size],f=-1,r=-1;
void enque();
void deque();
void traverse();

int main()
{
	int choice;
	clrscr();
	while(choice!=4)
   {	printf("\n 1. Enqueue 2. Dequeue 3. Traverse 4. Exit\n ");
	printf("\nEnter the chioce :\n");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
		  printf("\nDo enqueue operation ");
		  enque();
		  break;
		case 2:
		  printf("\nDo dequeue operation ");
		  deque();
		  break;
		case 3:
		   printf("\nDo traversing operation ");
		   traverse();
		   break;
		case 4:
		    exit(0);
		    break;
      }

	}
getch();
return 0;
}

	void enque()
	{
		int ele;
		if(r==size-1)
			{
			  printf("\nQueue is overflow\n");
			}
		else
		       {
			printf("\nEnter the element to insert: \n");
			scanf("%d",&ele);
			if(f==-1)
				f=0;
				r++;
				queue[r]=ele;

		       }

	}

	void deque()
	{int n;

		if(f==-1 && r==-1)
			printf("\nEmpty queue");
		else
		{     	n=queue[f];
			if(f==r)
			{
				f=-1;
				r=-1;
			}
			else
			{

				f++;
				printf("\nDeleted element is: %d\n",n);
			}

		}
	}

    void traverse()
    {		int i;
		if(f==-1 && r==-1)
		printf("\nQueue is Empty");
		else
		{
			for(i=f;i<=r;i++)
			{
			printf("\t%d",queue[i]);
			}
		}

    }