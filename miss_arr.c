#include<stdio.h>
int main()
{
	int a[11],sum=0,sum1=0;
	int len;
	printf("enter length: ");
	scanf("%d",&len);
	for(int i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	int l=a[0];
	int k=a[len-1];
	for(int j=l;j<=k;j++)
	{
		sum1=sum1+j;
	}
	printf("%d",sum1-sum);
}
