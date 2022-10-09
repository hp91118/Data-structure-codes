#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[10];
	int i,c=0,d=0;
	clrscr();
	printf("\nEnter the string:\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{	if( str[i] == 'a' || str[i] == 'e'|| str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			{

				c++;
			}
		 else
			{ d++;
			}
	 }
	 printf("\nNumber of vowels : %d",c);
	 printf("\nNumber of consonant : %d",d);

	 getch();
	 return 0;

}