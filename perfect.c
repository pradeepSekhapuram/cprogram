#include<stdio.h>
int main()
{
	int i,num,count=0;
	printf("enter number:");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
			count=count+i;
	}
	if(num==count)
		printf("%d is a perfect number",num);
	else
		printf("%d is not a perfect number",num);
}


