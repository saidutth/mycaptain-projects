#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
   char a[100];
	printf("enter a string:\n");
	gets(a);
	int l =0;
	int h = strlen(a)-1;
	
	while (h>1)
	{
		if (a[l++]!=a[h--])
		{
			printf("%%s is not a palindrome",a);
			return 0;
		}
		
		
		
	}
	printf("%s is a palindrome",a);
	
	return 0;
	getch;
	
}
