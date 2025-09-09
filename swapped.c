#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    c=b;
    b=a;
    a=c;
    printf("the swapped values of a and b are %d and %d respectively",a,b);
    return 0;
    
}
