#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *head=NULL, *NEW ,*last;
void create();
void find_last();
void insert_beg();
void delete_beg();
void insert_end();
void delete_end();
void insert_pos();
void delete_pos();
void traverse();

void  main()
{
	int ch;
    while(1)
	{
		printf("\n1.Insert at begining \n2.Delete From Begining \n3.Inserte at End \n4.Delete From End \n5.Inseret At Specific position\n6.Delete From specific End \n7.Traverse \n8.Exit \nEnter choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			insert_beg();
			break;
			case 2:
			delete_beg();
			break;
			case 3:
			insert_end();
			break;
			case 4:
			delete_end();
			break;
			case 5:
			insert_pos();
			break;
			case 6:
			delete_pos();
			break;
			case 7:
			traverse();
			break;
			case 8:
			exit(0);
			break;
			default:
			printf("\nEnter the correct chioce");
			break;

		}

	}

}
void create()
{
	int ele;
	NEW=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter the Element :");
	scanf("%d",&ele);
	NEW->data=ele;
	NEW->link=NULL;
}
void find_last()
{
	last=head;
	while(last->link!=head)
	{
		last=last->link;
	}
}
void insert_beg()
{
	create();
	
	if(head==NULL)
	{
		head=NEW;
		NEW->link=head;
	}
	else
	{
		find_last();
		NEW->link=head;
		head=NEW;
		last->link=head;
	}
}
void traverse()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("List Empty");
	}
	else
	{
		temp=head;
		while(temp->link!=head)
		{
			printf("%d ->",temp->data);
			temp=temp->link;
		}
		printf("%d->",temp->data);
	}
}
void delete_beg()
{

	struct node *temp;
	if(head==NULL)
	{
		printf("\nList Empty");
	}
	else
	{       find_last();
		temp=head;
		head=head->link;
		last->link=head;
		printf("\n Deleted Element : %d",temp->data);
		free(temp);
	}

}
void insert_end()
{
	create();
	find_last();
	if(head==NULL)
	{
		head=NEW;
		NEW->link=head;
	}
	else
	{
		last->link=NEW;
		NEW->link=head;

	}
}
void delete_end()
{
	struct node *temp, *pre;
	if(head==NULL)
	{
		printf("\nEmpty List");
	}
	else
	{
		temp=head;
		while(temp->link!=head)
		{
			pre=temp;
			temp=temp->link;
		}
		pre->link=head;
		printf("\n Deleted Element : %d",temp->data);
		free(temp);

	}
}
void insert_pos()
{       struct node *temp;
	int i=1,pos;
	create();
	printf("\n Enter the position to insert :");
	scanf("%d",&pos);
	temp=head;
	while(i<pos-1)
	{
		temp=temp->link;
		i++;
	}
	NEW->link=temp->link;
	temp->link=NEW;
}
void delete_pos()
{
	int i=1,pos;
	struct node *temp, *pre;
	printf("\n Enter the position for deletion:");
	scanf("%d",&pos);
	temp=head;
	while(i<pos)
	{        pre=temp;
		temp=temp->link;
		i++;
	}
	pre->link=temp->link;
	printf("\n Deleted Element : %d",temp->data);
	free(temp);
}
