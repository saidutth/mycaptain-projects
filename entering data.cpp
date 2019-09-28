//c program to store an user input and displaying it back



#include<stdio.h>
#include<conio.h>
int main()
{
	char name[50];
	int age;
	int ph[50];
	printf("enter information:\n");
	printf("enter name:");
	scanf("%s",name);
	printf("ENTER AGE:");
	scanf("%d",&age);
	printf("ENTER PHONE NUMBER:");
	scanf("%d",ph);
	printf("displaying information:\n");
	printf("name:%s\n",name);
	printf("AGE: %d\n",age);
	printf("phone number:%d\n",ph);
	return 0;
	getch ();
	
	
}
