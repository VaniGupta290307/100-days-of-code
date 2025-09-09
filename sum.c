#include<stdio.h>
int main()
{
    int a=1,n,sum=0;
    printf("enter value of n by the user");
    scanf("%d",&n);
    while(a<=n)
    {
        sum=sum+a;
        a++;
    }
    printf("the sum of first natural numbers is %d",sum);
    return 0;
}
