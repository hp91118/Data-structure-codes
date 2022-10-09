#include<stdio.h>
#include<conio.h>
int a,b,c,d,e,f,g;
void add();
void sub();
void mul();
void div();
void mod();


int main()
{
int ch;
clrscr();
printf(" 1.addition\n 2.subtraction\n 3.multiplication\n 4.division\n 5. modulous\n 6.exit\n");
printf("\nEnter two numbers:");
scanf("%d%d",&a,&b);
do{
printf("\nEnter your choice:");
scanf("%d",&ch);

switch(ch)
  {
case 1:
 add();
break;
case 2:
 sub();
break;
case 3:
 mul();
break;
case 4:
 div();
break;
case 5:
 mod();
break;
case 6:
exit(0);
break;
default:
printf("Kindly enter correct numbers");
 }

  }
  while(ch<=6);
getch();
return 0;

}

void add()

	{
	c=a+b;
	printf("Addition is: %\n",c);
	}
void sub()

	{
	 d=a-b;
	printf("Subtraction is: %d\n",d);
	}
void mul()

       {
	 e=a*b;
	printf("Multiplication is: %d\n ",e);
       }
void div()
      {
	f=a/b;
	printf("Division is: %d\n",f);
      }
void mod()

      {
	g=a%b;
	printf("Modulus is: %d\n",g);
      }


