#include <stdio.h>
#include <conio.h>
int main()
{
	int num,rev;
	printf("enter the number:");
	scanf("%d",&num);
	for(rev=0;num>0;num =num/10){
		rev = rev*10;
		rev =rev + num%10;
		
	}
	printf("reversed number is %d",rev);
	return 0;
	getch;
	
}
