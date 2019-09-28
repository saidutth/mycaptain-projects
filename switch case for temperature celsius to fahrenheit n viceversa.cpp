/* TEMPERATURE CELSIUS TO FAHRENHEIT AND FAHRENHEIT TO CELSIUS 
USING  SWITCH CASE*/
#include<stdio.h>
#include<conio.h>
int main(){
	float a,b,centigrade,fahrenheit;
	int x;
	printf("1. Fahrenheit to celsius\n");
	printf("2. Celsius to Fahrenheit\n");
	printf("enter your choice");
	
	scanf("%d",&x);
	switch(x)
	{
	case 1:
		printf("enter the the value of the fahrenheit\n");
		scanf("%f",&a);
		centigrade=5*(a-32)/9;
		printf("\n\ncelsius temperature:%fC",centigrade);
		break;
	case 2 :
	    	printf("enter the the value of the celsius\n");
		scanf("%f",&b);
		fahrenheit=((9*b)/5)+32;
		printf("\n\n Fahrenheit temperature:%fF",fahrenheit);
		break;
	default:
	printf("wrong choice ......\ntry again");
}
		
 return 0;
 getch ;
}
		
		
		
		
		
		
		
	
	
	
	
	

