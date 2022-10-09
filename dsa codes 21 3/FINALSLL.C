#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//gayu SLL final code
void create();
void insert_beg();
void delet_beg();
void traverse();
void insert_end();
void delet_end();
void insert_pos();
void delet_pos();
void smallest();
void largest();
struct node
{
	int data;
	struct node *link;
}; //do not forget
struct node *head=NULL,*New;
int main()
{
	int ch;
	clrscr();
	while(1)

	{        printf("\n------------------------------------------------");
		 printf("\n1.Insert at beg \n2.Delete at beg \n3.Traverse \n4.Exit \n5.Insert at end \n6.Delet at end \n7.Insert at pos \n8.Delet at pos \n9.smallest \n10.largest");
		 printf("\nEnter choice :");
		 scanf("%d",&ch);

		switch(ch)
		{
			case 1:
			insert_beg();
			printf("\n------------------------------------------------") ;
			break;
			case 2:
			delet_beg();
			printf("\n------------------------------------------------");
			break;
			case 3:
			traverse();
			printf("\n------------------------------------------------") ;
			break;
			case 4:
			exit(0);
			break;
			case 5:
			insert_end();
			printf("\n------------------------------------------------") ;
			break;
			case 6:
			delet_end();
			break;
			case 7:
			insert_pos();
			printf("\n------------------------------------------------") ;
			break;
			case 8:
			delet_pos();
			printf("\n------------------------------------------------") ;
			break;
			case 9:
			smallest();
			printf("\n------------------------------------------------") ;
			break;
			case 10:
			largest();
			printf("\n------------------------------------------------") ;
			break;
			default:
			printf("\nInvalid choice");

		}
	}
}
void create()
{
	int ele;
	New=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter element :");
	scanf("%d",&ele);
	New->data=ele;
	New->link=NULL;

}
void insert_beg()
{
	create();
	if(head==NULL)
	{
		head=New;
	}
	else
	{
		New->link=head;
		head=New;
	}

}
void traverse()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("\nEmpty ");

	}
	else
	{
		temp=head;
		printf("\nLinked list : ") ;
		while(temp!=NULL)   //remember
		{
			printf("%d ->",temp->data);
			temp=temp->link;
		}
		printf("NULL\n") ;
	}
}
void delet_beg()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("\nEmpty ");
	}
	else
	{
		temp=head;
		head=head->link;
		printf("\nDeleted element :%d\n",temp->data);
		free(temp);

	}
}
void insert_end()
{
	struct node *temp;
	create();
	if(head==NULL)
	{
		head=New;
	}
	else
	{
		temp=head;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->link=New;
	}
}
void delet_end()
{
	struct node *temp,*prev;
	if(head==NULL)
	{
		printf("\nEmpty");

	}
	else
	{
		temp=head;
		while(temp->link!=NULL)
		{
			prev=temp;
			temp=temp->link;
		}
		prev->link=NULL;   //remember
		printf("\nDeleted element : %d",temp->data) ;

	}
}
void insert_pos()
{
	int i=1,pos;
	struct node *temp;
	printf("\nEnter position :");
	scanf("%d",&pos);
	create();
	temp=head;
	while(i<pos-1)
	{
		temp=temp->link;
		i++;//do not forget
	}
       New->link=temp->link;
	temp->link=New;
}
void delet_pos()
{
	int i=1,pos;
	struct node *temp,*prev;
	if(head==NULL)
	{
		printf("\nEmpty");
	}
	else
	{       printf("\nEnter position :");
		scanf("%d",&pos);
		temp=head;
		while(i<pos)
		{
			prev=temp;
			temp=temp->link;
			i++;//do not forget
		}
		prev->link=temp->link;
		printf("\nDeleted element :%d",temp->data);
		free(temp);
	}

}
void smallest()
{
	int small=0;
	struct node *temp=NULL;
	small=temp->data;
	for(temp=head;temp!=NULL;temp=temp->link)
	{
		if(temp->data<small)
		{
			small=temp->data;
		}
	}
	printf("\nSmallest ele : %d",small);
}
void largest()
{	int big=0;
	struct node *temp=NULL; //do not forget to inti to null else 767
	big=temp->data;
	for(temp=head;temp!=NULL;temp=temp->link)
	{
	       if(temp->data>big)
	       //if(big<temp->data)
		{
			big=temp->data;
		}
	}
	printf("\nLargest ele : %d",big);
}