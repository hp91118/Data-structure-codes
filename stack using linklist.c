#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
       };
struct node *top=NULL,*temp;
void push();
void pop();
void traverse();

int main()
{
int ch;

do
{
printf("\n1. Insert_beg  2.  Delete_beg   3.Traverse  4. Exit");
printf("\nEnter your choice:");
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
        exit(0);
        break;
    default:
        printf("\n Entere valid choice");
        break;
    }
     }while(ch!=4);
     //getch();
     return 0;
}

void push()
{
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data :");
    scanf("%d",&temp->data);
    if(top==NULL)
    {
    top=temp;
    temp->link=NULL;
    }
    else
    {
    temp->link=top;
    top=temp;

    }
}
void pop()
{
    if(top==NULL)
    {
    printf("\n Stack is empty");
    }
    else
    {
    
    temp=top;
    top=top->link;
    printf("\n %d is deleted",temp->data);
    free(temp);

    }
}
void traverse()
{
    temp=top;
    if(top==NULL)
    {
    printf("\n Stack is empty");
    }
    else
	{
	
    while(temp!=NULL)
    {
    printf("%d-> ",temp->data);
    temp=temp->link;
    
    }
}
}

