#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	printf("before swap a=%d b=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nafter swap a=%d b=%d",a,b);
	return 0;
}

