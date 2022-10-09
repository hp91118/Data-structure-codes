#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *link;
};
struct node *New=NULL,*rear=NULL,*front=NULL;
void create();
void enqueue();
void dequeue();
void traverse();

int main(){
int ch;
do{
	printf("\n 1.Enqueue  2.Dequeue  3.Trverse  4.Exit");
	printf("\n Enter the choice:");
	scanf("%d",&ch);
	switch(ch){
		case 1:
				enqueue();
				break;
		case 2:
				dequeue();
				break;
		case 3:
				traverse();
				break;
		case 4: 
				exit(0);
				break;
		default:
				printf("\nInvalid choice");
	}
	
}while(ch!=4);	
return 0;
}
void create(){
	int ele;
	New=(struct node *)malloc(sizeof(struct node));
	printf("\n Enter the element:");
	scanf("%d",&ele);
	New->data=ele;
	New->link=NULL;	
}

void enqueue(){
	struct node *temp;
	create();
	if(front==NULL){
		front=New;
		rear=New;
	}
	else{
	    
		temp=front;
		while(temp->link!=NULL){
			temp=temp->link;
		}
		temp->link=New;
	    rear=New;
		
	}
}
void dequeue(){
    struct node *temp;
    if(front==NULL){
        printf("\n List is empty");
    }
    else{
        temp=front;
        front=front->link;
        printf("\n%d is deleted",temp->data);
        free(temp);
    }
}
void traverse(){
	struct node *temp;
	if(front==NULL){
		printf("\n List is empty");
	}
	else{
	  temp=front;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->link;
	}	
	printf("NULL");
 }
}


