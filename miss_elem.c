#include<stdio.h>
int main()
{
	int a[10]={3,7,4,9,12,6,1,11,2,10};
	static int h[13];
	for(int i=0;i<10;i++)
		h[a[i]]++;
	for(int i=1;i<12;i++)
	{
		if (h[i]==0){
			printf(" the missing values are %d",i);
		    	}
	}
}
