#include <stdio.h>
void bubble(int arr[],int n)
{
   int  i,j, temp;

  for(i=0;i<n-1;i++)
   {
       for(j=0;j<n-i-1;j++)
       {
         if(arr[j]>arr[j+1])
         {
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
         }
       }
   }
    printf("Sorted elements:\n\n");

    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

}

int main()
{
    int i;

    int n;//int n=sizeof(arr) / sizeof(arr[0]);

    printf("Enter number of elements:");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter elements:\n\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    bubble(arr,n);
}
































