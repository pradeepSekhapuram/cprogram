#include<stdio.h>
int main()
{
	int num,i,fact=1;
	printf("enter number:");
	scanf("%d",&num);
	for(i=num;i>=1;i--)
		fact=fact*i;
	printf("the factorial of %d is %d",num,fact);
}


