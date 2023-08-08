#include<stdio.h>
int main()
{
	int a,b,c,d,sum,avg;
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("Enter 2nd number:");
	scanf("%d",&b);
	printf("Enter 3rd number:");
	scanf("%d",&c);
	printf("Enter 4th number:");
	scanf("%d",&d);
	sum = a+b+c+d;
	avg= sum/4;
    	printf("avg=%d",avg);
	return 0;
}
