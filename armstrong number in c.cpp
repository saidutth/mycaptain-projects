/**
a program to check an armstrong number*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,r,sum,digits,temp;
	printf("enter a number:");
	scanf("%d",&n);
	
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(pow(r,3));
		n=n/10;
	}
	if(temp==sum)
	{
	printf("the number %d is an armstrong number:",temp);
		
	}
	else
	{
	printf("the number %d is not an armstrong number:",temp);
   }
	
return 0;
getch;

}

