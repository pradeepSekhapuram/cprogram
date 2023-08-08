#include<stdio.h>
int main()
{
    int num[6]={10,11,12,13,14,15};
    int size=sizeof(num);
    for(int i=0;i<size;i++){
     printf("num[%d]=%d\n",i,num[i]);
    }
    return 0;
}
