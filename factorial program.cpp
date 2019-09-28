/* factorial program*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int x,i=1,y=1;
	printf("enter a number:");
	scanf("%d",&x);
	
	while(i<=x)
	{
		y=y*i;
		i++;
   
	}
	
	printf("factorial value of %d is %d",x,y);
	
	return 0;
	getch;
	
	
	
}
