#include<stdio.h>
int main()
{
	int i,j,km,rs;
	printf("enter starting meter reading:");
	scanf("%d",&i);
	printf("enter ending meter reading:");
	scanf("%d",&j);
	km=j-i;
	printf("number of km travelled %d\n",km);
	rs=km*20;
	printf("cost of travelling %d",rs);
}
