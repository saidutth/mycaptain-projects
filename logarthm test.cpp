#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int n,result,k,digits;

n=100;
result=log10(n);
digits=result+1;
k=pow(n,result);
printf("the result is %d\n",result);
printf("the value of k is %d\n",k);
printf("the no. of digits are:%d",digits);
return 0;
getch;

}

