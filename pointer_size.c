#include<stdio.h>
int main()
{
	int a=2;
	int b=4;
	int c=5;
	int *ptr[3] = {&a,&b,&c};
	printf("size of prt =%lu\n",sizeof(ptr));
	for(int i=0;i<3;i++)
	{
		printf("%d\n",*ptr[i]);
	}

}
