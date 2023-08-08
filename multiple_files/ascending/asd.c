#include<stdio.h>
#include"header6.h"
void main()
{
	int i,j,a,n, number[30];
	printf("enter no of value of N \n");
	scanf("%d",&n);
	printf("enter the numbers\n");
	for (i=0;i<n;i++)
	scanf("%d",&number[i]);
	fun3(number,n);
 	printf("The numbers arranged in ascending order are given below \n");
	{
	for(i=0;i<n;++i)
		printf("%d\n",number[i]);
	}
}


