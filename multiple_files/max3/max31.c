#include<stdio.h>
int fun2(int a,int b,int c)
{
	if(a>b && a>c)
		printf("%d",a);
	if(b>a && b>c)
		printf("%d",b);
	if(c>a && c>b)
		printf("%d",c);
}
