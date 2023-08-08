#include<stdio.h>
int main()
{
	int res,num,i;
	printf("enter number:");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
	res=(num*num*num);
	printf("%d",res);
	}
}
