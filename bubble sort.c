#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int ar[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<a-1;i++)
    {
        for(int j=0;j<a-i-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
                int temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    for(int i=0;i<a;i++)
    {
        printf("%d",ar[i]);
    }
}
