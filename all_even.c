#include<stdio.h>
int main()
{
	int i,num;
	printf("enter number:");
	scanf("%d",&num);
	printf("even numbers below %d are: ",num);
	for(i=0;i<=num;i++)
	{
		if(i%2==0)
			printf("%d,",i);
	}
}
