#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,n,sum=0;
	clrscr();
	printf("Enter array size less than 10 :\n");
	scanf("%d",&n);
	printf("\nEnter the elements in array :\n");
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}

	printf("\nThe sum of array elements : %d",sum);
	getch();
	return 0;
}