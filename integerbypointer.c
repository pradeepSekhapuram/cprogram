#include<stdio.h>
int main()
{
	int d=9;
	int *p;
	p=&d;
	printf("%d %d %p",d,*p,&d);
}
