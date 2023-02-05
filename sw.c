#include<stdio.h>

int s(int a,int b)
{
    int c=a;
    a=b;
	b=c;
	
	printf("A swap:%d",a);
	printf("\n");
	printf("B swap:%d",b);
    
}

int main()
{
	int a,b,c=0;
	printf("A: ");
	scanf("%d",&a);
	printf("B: ");
	scanf("%d",&b);
	s(a,b);
	return 0;

}
