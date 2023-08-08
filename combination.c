#include<stdio.h>
int rec(n,r)
{
	// f=n!/(n-r)!*r!
	t1=fact(n);
	t2=fact(n-r);
	t3=fact(r);
	t4=t1/t2*t3;
}
int main()
{
	printf("enter n value:%d ");
	scanf("%d",&n);
	printf("enter r value:%d ");
	scanf("%d",&r);
	rec(n,r)
}

