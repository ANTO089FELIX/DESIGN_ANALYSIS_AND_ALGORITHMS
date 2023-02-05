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
    int min=200,max=-1;
    for(int i=0;i<a-1;i++)
    {
      for(int j=0;j<a-i-1;j++)
      {
          if(arr[j]>arr[j+1])
          {
              int temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
          }
      }
    }
    int p,m;
    scanf("%d",&p);
    scanf("%d",&m);
    printf("MIN:%d",arr[p-1]);
    printf("MAX:%d",arr[a-m]);
    
    
}
