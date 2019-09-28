//writing program to take temp from celsius to fahrenheit
#include<stdio.h>
#include<conio.h>
int main()
{
	float cel,far;
	printf("enter the termperature:");
	scanf("%f",&cel);
	far=(cel*9)/5.0+ 32;
	printf("the temperature is%f F or %f C",far,cel);
	return 0 ;
	getch;
}
