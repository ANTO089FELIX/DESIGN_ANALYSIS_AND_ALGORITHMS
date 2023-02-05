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
    int min=100,max=-1;
    for(int i=0;i<a;i++)
    {
        if(min>ar[i])
        {
           min=ar[i];
        }
        if(max<ar[i])
        {
            max=ar[i];
        }
        
    }
    printf("MIN:%d",min);
    printf("\n");
    printf("MAX:%d",max);
    
}
