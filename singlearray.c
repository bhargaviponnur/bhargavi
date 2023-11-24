#include <stdio.h>
int main()
{
    //array to store digit
    int a [2] [3];
    int i,b;
    printf("enter the size of:"),
    scanf ("%d",&b);
    for(i=0;i<b;i++)
    {//%1d reads a single digit
    scanf("%1d",&a[i]);
    }
    for(i=0;i<b;a[i])
    printf("%d",a[i]);
    return 0;
}

