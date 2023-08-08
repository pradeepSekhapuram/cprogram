#include<stdio.h>
int main()
{
	int num[5]={1,56,74,897,456};
	int *pint,max;
	pint=&num[0];
	*pint=num[0];
	max=*pint;
	for(int i=0;i<5;i++)
	{
		if(*(pint+i)>max)
		max=*(pint+i);
	}
	printf("maximum number is %i",max);
}
