//left operation- Data Structures

#include<stdio.h>
int main()
{
    int n;
    int d;
    scanf("%d%d",&n,&d);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int arr1[n];
      
    d=d%n;
    int k=0;
    
    for(int i=d;i<n;i++)
    {
        arr1[k++]=arr[i];
    }
    for(int i=0;i<d;i++)
    {
        arr1[k++]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
    return 0;
}