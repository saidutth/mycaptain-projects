/**a program to display multiplication table*/
#include<stdio.h>
#include<conio.h>
int main ()
{
	int number,upto,i=1;
printf("enter a number:\n");
scanf("%d",&number);
printf("upto how many times:\n");
scanf("%d",&upto);
printf("multiplication table of %d\n",number);
printf("--------------\n");


  while (i<=upto)
{
	printf("|%d x %d = %d |\n",number ,i,number*i);
   printf("--------------\n");
	i++;
	
}

return 0;
getch ;	
}
