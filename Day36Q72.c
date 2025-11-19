#include<stdio.h>
void main()
{
    int a[50][50],i,j,rows,columns,sum=0;
    printf("Enter the number of rows and columns");
    scanf("%d %d",&rows,&columns);
    printf("Enter matrix elements");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
    }
    printf("sum of its elements is %d",sum);
}
