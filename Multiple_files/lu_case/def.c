#include<stdio.h>
int fun(input)
{
	if(input>=64 && input<=90)
	{
		printf("Given input in upper case\n");
		printf("input in lower case is %c\n",input+32);
	}
	else if (input>=97 && input<=122)
	{
		printf("given input in lower case\n");
		printf("input in upper case is %c\n",input-32);
	}
}

