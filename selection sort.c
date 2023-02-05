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
    for(int i=0;i<a-1;i++)
    {
        int mx=i;
        for(int j=i+1;j<a;j++)
            if(arr[j]<arr[mx])
            mx=j;
            int temp=arr[mx];
            arr[mx]=arr[i];
            arr[i]=temp;
    }
    for(int i=0;i<a;i++)
    {
        printf("%d",arr[i]);
    }
}
