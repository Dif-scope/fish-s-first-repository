//指针做参数，事项两个参数值的交换并返回结果

#include<stdio.h>
int a,b;
int*p=&a,*q=&b;

void exchange(int *ptr1,int *ptr2)
{
	int temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
 } 

int main()
{
	printf("input 2 num to exchange:");
	scanf("%d%d",&a,&b);
	printf("before exchange:%d %d",a,b);
	exchange(p,q);
	printf("echanged:%d %d",a,b);
	return 0;
}
