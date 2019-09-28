/*max number in an array*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int a[100],i,n,max=0,min=0;
	printf("enter no. of elements in an array:");
	scanf("%d",&n);
	printf("\n enter elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	printf("%d",a[i]);
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	printf("\n");
	printf("%d is the biggest number of the array",max);
	
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		min = a[i];
	}
	printf("\n");
	printf("%d is the smallest number of array",min);
	
	return 0;
	getch ;
	
	
	
	
}
