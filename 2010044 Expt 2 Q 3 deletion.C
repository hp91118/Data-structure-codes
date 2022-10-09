#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50],size,n,i,j;
	clrscr();
	printf("Enter the size of an array : \n");
	scanf("%d",&size);
	printf("Enter the elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	 }
	printf("List before deletion \n");
	for(i=0;i<size;i++)
	 {
	 printf("%d\n",a[i]);
	    }
	 printf("\nEnter an element to delete :\n");
	    scanf("%d",&n);
	    for(i=0;i<size;i++)
	{
		  if(a[i]==n)
		 {
		   for(j=i;j<size-1;j++)
			 {
				 a[j]=a[j+1];
			 }
			 break;
		}
	}
	 printf("List after deletion\n");
	 for(i=0;i<size-1;i++)
	     {
	 printf("%d\n",a[i]);
		 }
    getch();
    return 0;

}