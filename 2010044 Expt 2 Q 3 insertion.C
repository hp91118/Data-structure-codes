#include<stdio.h>
#include<conio.h>

int main()
{

	int a[50],element,i,loc,size;
	clrscr();
	printf("Enter size of array less than 50 :\n");
	scanf("%d",&size);
	printf("Enter %d array elements :\n",size);
	for(i=0;i<size;i++)
		{
			scanf("%d",&a[i]);
		}
	printf("List before insertion :\n");
	for(i=0;i<size;i++)
		{
			printf("%d\n",a[i]);
		}
	printf("\nEnter an element to insert :\n");
	scanf("%d",&element);
	printf("Enter a position to insert an element : %d\n",element);
	scanf("%d",&loc);
	loc--;
	for(i=size-1;i>=loc;i--)
	{
		a[i+1]=a[i];
	}

	a[loc]=element;
	printf("List after insertion :\n");
	for(i=0;i<size+1;i++)
	{
		printf("%d\n",a[i]);
	}

getch();
return 0;

}

