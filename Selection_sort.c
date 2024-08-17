#include<stdio.h>


void selection(int arr[],int n)
{
    int i,j,temp,min_idx;


for(i=0;i<n-1;i++)
{
    min_idx=i;
    for(j=i+1;j<n;j++)
    {
        if(arr[j]<arr[min_idx])
        {
            min_idx=j;
        }
    }
    temp=arr[i];
    arr[i]=arr[min_idx];
    arr[min_idx]=temp;
}

    printf("\nSorted elements:\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

}

int main()
{

    int i,n;

    printf("Enter no. of elements:");
    scanf("%d",&n);

    int arr[n];

    printf("\nEnter unsorted elements:\n\n");

    for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }

    selection(arr,n);
}

