#include<stdio.h>
int main()
{
	int i,j,temp,size;
	int a[20]; 
	printf("Enter the size: ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter the element %d: ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++) 
		{
			if(a[j]<a[i])	
			{
				temp=a[i]; 
				a[i]=a[j]; 
				a[j]=temp; 
			}
		}
	}
	printf("sorted array is: ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}

}

	

