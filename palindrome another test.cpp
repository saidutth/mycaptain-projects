#include<stdio.h>
#include<string.h>
#include<conio.h>
int main ()

{  char str[100];
	int l=0;
	int h = strlen(str)-1;
	while(h>1)
	{
		if(str[l++]!=str[h--])
		{
		 printf("%s is not palindrome",str);
		 return 0;
		 
		 
		 
		 
		}
		
		
	}
	
	printf("%s is palindrome");
	
	
}
