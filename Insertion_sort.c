#include<stdio.h>

void selection(int arr[],int n)
{


    8-6-2-4
    2-8-6-4
    2-4-8-6
    2-4-6-8








    printf("Sorted elements:\n");
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

    printf("Enter unsorted elements:\n");

    for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }

    selection(arr,n);
}

