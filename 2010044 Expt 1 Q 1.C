#include<stdio.h>
#include<conio.h>

int main()
{
int a,b,add,sub,mul,div,mod,ch;
clrscr();
printf(" 1.addition\n 2.subtraction\n 3.multiplication\n 4.division\n 5. modulous\n");
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
do{
printf("\nEnter your choice");
scanf("%d",&ch);


switch(ch)
  {
case 1:
add=a+b;
printf("Addition is: %d/n",add);
break;
case 2:

sub=a-b;
printf("Subtraction is: %d/n",sub);
break;
case 3:

mul=a*b;
printf("Multiplication is: %d/n ",mul);
break;
case 4:

div=a/b;
printf("Division is: %d/n",div);
break;
case 5:

mod=a%b;
printf("Modulus is: %d\n",mod);
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