#include<stdio.h>
int print7largest(int arr[],int arr_size)
{
    int i,j,n;
    for (j=0;i<arr_size;i++)
    {
        for(j=i+1;j < arr_size;j++)
        {
            if(arr[i] > arr[j])
            {
                n=arr[i];
                arr[i]=arr[j];
                arr[j]=n;
            }
        }
    }
    return arr[6];
}
int main()
{
    int n,seventh,i;
    printf("enter size of array :");
    scanf("%d")      
