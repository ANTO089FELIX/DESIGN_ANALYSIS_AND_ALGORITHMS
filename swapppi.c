#include<stdio.h>
int main()
{
	int a,b,c=0;
	printf("A: ");
	scanf("%d",&a);
	printf("B: ");
	scanf("%d",&b);
	a=b;
	b=c;
	c=a;
	printf("A swap:",b);
	printf("B swap:",c);
}
