#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int arr[a];
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	int key;
    scanf("%d",&key);
	for(int i=0;i<a;i++)
	{
		if(arr[i]==key)
		{
			printf("%d",i);
		}
		
	}
}
