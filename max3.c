#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter three integers\n");
	scanf("%d %d %d", &a, &b, &c);
	max=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("maximum number is =%d\n", max);
	return 0;
}
