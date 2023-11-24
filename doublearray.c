#include <stdio.h>
int main()
{
    // array to store digits
    
    int i,j, r,c;  
    printf("enter rows:");
    scanf("%d", &r);
    printf("enter coloums :");
    scanf("%d",&c);
    int a[r][c];
           
    for (i=0; i<r; i++)
    {
        for(j=0;j<c;j++){
        //%d reads for a double array digit
        scanf("%2d", &a[i][j]);
        }
    } 
    for (i=0; i<r; i++)
    {
        for(j=0;j<c;j++){
        //%d reads for a double array digit
        printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}