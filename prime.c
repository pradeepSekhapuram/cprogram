#include<stdio.h>
int main()
{
	int num,i,count=0;
	printf("enter a number:");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if((num%i)==0)
		{
			count++;
		}
	}
		if(count>=1)
			printf("%d is is not prime",num);
		else
			printf("%d is prime",num);
	
}


