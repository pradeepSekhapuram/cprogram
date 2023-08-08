#include<stdio.h>
int main()
{
	int num,rem,res=0;
	printf("enter number:");
	scanf("%d",&num); 
	int num1=num;
	while(num)
	{
		rem=num%10;
		res=res+(rem*rem*rem);
		num=num/10;
	}
	if(res==num1)
		printf("%d is a armstrong number",num1);
	else
		printf("%d is not a armstrong number",num1);
}


