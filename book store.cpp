#include  <stdio.h>
#include  <conio.h>
#include <string.h>
 struct books{
 	char name[50];
 	float price;
 	int id;
 	};
 	
int main()
{
	int n,i;
	printf("enter number of books:\n");
	scanf("%d",&n);
	struct books b[n];
	
	for(i=0;i<n;i++){
		printf("enter book id ,name, and price:\n");
		scanf("%d%s%f",&b[i],b[i].name,&b[i].price);
		
	}
	char bookN[50];
	printf("enter a book name to get details\n");
	scanf("%s",bookN);
	for(i=0;i<n;i++){
		if(strcmp(bookN,b[i].name)==0){
			printf("book details found\n");
			printf("id: %d \t name:%s \t  price: %f",b[i].id,b[i].name,
			b[i].price);
			i=i-1;
			break;			
		}
	}
		
		if(i==n) printf("book details not found");
		
	return 0;
	getch;
}
