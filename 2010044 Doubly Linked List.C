#include<stdio.h>

#include<stdlib.h>
void creat();
void find_last();
void insert();
void delet();
void insert_end();
void delet_end();
void insert_pos();
void delet_pos();
void ftraverse();
void btraverse();
struct node
{
	int data;
	struct node *Rlink,*Llink;

} ;
struct node *head=NULL,*NEW,*last=NULL;


int main()
{
	int ch;

	while(1)
		{
			printf("\n1.insert_beg\n2.delete_beg \n3.insert_end \n4.delete_end \n5.insert_pos \n6.delete_pos \n7.forward traverse \n8.backward traverse \n9.exit\n");
			printf("\nenter choice :");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
				insert();
				break;
				case 2:
				delet();
			     break;
				case 3:
				insert_end();
				break;
				case 4:
				delet_end();
				break;
				case 5:
				insert_pos();
				break;
				case 6:
				delet_pos();
				break;
				case 7:
				ftraverse();
				break;
				case 8:
				btraverse();
				break;
				case 9:
				exit(0);
				break;

			}

		}
}

void create()
{       int ele;
	NEW=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter element :");
	scanf("%d",&ele);
	NEW->data=ele;
	NEW->Llink=NULL;
	NEW->Rlink=NULL;
	
}
 void find_last()
{
	last=head;
	while(last->Rlink!=NULL)
	{
		last=last->Rlink;
	}
}
void insert()
{
	create();
	if(head==NULL)
		{
			head=NEW;
		}

	else
	{
		NEW->Rlink=head;
		head->Llink=NEW;
		head=NEW;

	}

}
void ftraverse()
{    	struct node *temp;
	
	if(head==NULL)
	{
		printf("List is Empty");
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			printf("%d ->",temp->data);
			temp=temp->Rlink;
		}
		printf("NULL");
	}
}
void delet()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("Empty List");

	}
	else
	{
	       temp=head;
	       head=head->Rlink;
	       printf("Deleted Element =%d",temp->data);
	       free(temp);

	}

}


void insert_end()
{
	struct node *temp;
	create();
	if(head==NULL)
	{
		head=NEW;
	}
	else
	{
		find_last();
		last->Rlink=NEW;
		NEW->Llink=last;
				
	}
	
}
void delet_end()
{       
	struct node *prev;
	find_last();
	if(head==NULL)
	{
		printf("Empty list");
	}
	else
	{
		
				find_last();
				prev=last->Llink;
				prev->Rlink=NULL;
				printf("\nDeleted Element :%d",last->data);
				free(last);

	}

}
void btraverse()
{    	struct node *temp;
	find_last();
	if(head==NULL)
	{
		printf("List is Empty");
	}
	else
	{
		temp=last;
		while(temp!=NULL)
		{
			printf("%d ->",temp->data);
			temp=temp->Llink;
		}
		printf("NULL");
	}
}



void insert_pos()
{       
	 int i=1,pos;
	 struct node *temp,*next;
	 create();
	 printf("\nEnter the Position :");
	 scanf("%d",&pos);

	 temp=head;
	 while(i<pos-1)
	 {
		temp=temp->Rlink;
		i++;
	 }
	 next=temp->Rlink;
	 NEW->Llink=temp;
	 NEW->Rlink=next;
	 
		 temp->Rlink=NEW;
		 temp->Llink=NEW;
}

void delet_pos()
{
	int i=1,pos;
	struct node *temp,*prev,*next;
	printf("\nEnter position to delete :");
	scanf("%d",&pos);
	if(head==NULL)
	{
		printf("\nLinked list is empty");
	}
	else
	{
		temp=head;
		while(i<pos)
		{
			
			temp=temp->Rlink;
			i++;

		}
		prev=temp->Llink;
		next=temp->Rlink;
		temp->Rlink=NULL;
		temp->Llink=NULL;
		prev->Rlink=next;
		next->Llink=prev;
		
		
		printf("Deleted element : %d",temp->data);
		free (temp);

	}


}
