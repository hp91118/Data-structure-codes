#include<stdio.h>
#include<conio.h>
void swap(int a,int b);
void swap1(int *x, int *y);

int main()
{
	int a,b,ch;
	clrscr();
	printf("Enter two numbers : \n");
	scanf("%d%d",&a,&b);
	printf("Enter the chioce \n1.For call by value\n 2.For call by ref \n Choice :");
	scanf("%d",&ch);
	printf("\nInside main Before Swapping a = %d and b = %d",a,b);
	switch(ch)
	{
	case 1:
	swap(a,b);
	break;
	case 2:
	swap1(&a,&b);
	break;
	default:
	printf("\nEnter  correct choice");
	//exit(0)
	break;
	}
	printf("\nInside main After Swapping a = %d and b = %d",a,b);
	getch();
	return 0;
}
void swap(int a, int b)
{
	int c;
	printf("\nInside swap1 Before Swapping a = %d and b = %d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nInside swap1 After Swapping a = %d and b = %d",a,b);

}

void swap1(int *x, int *y)
{
	int c;
	printf("\nInside swap1 Before Swapping a = %d and b = %d",*x,*y);
	c=*x;
       *x=*y;
	*y=c;
	printf("\nInside swap1 After Swapping a = %d and b = %d",*x,*y);

}
