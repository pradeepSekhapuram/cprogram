#include<string.h>
#include<stdio.h>
void fun1(char a[],char b[])
{
	strcat(a," ");
	strcat(a,b);
	printf("the reversed string is:%s",a);
}
