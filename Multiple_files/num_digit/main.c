#include<stdio.h>
#include"header.h"
int main()
{
	int n,ctr;
	printf("enter number: ");
	scanf("%d",&n);
	ctr = noofdigits(n);
	printf("number of digits in number is:%d \n\n",ctr);
	return 0;
}
