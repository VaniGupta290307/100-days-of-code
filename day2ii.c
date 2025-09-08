#include<stdio.h>
int main()
{
    float radius,area,circumference, pi =3.14;
    printf("enter radius of circle");
    scanf("%f",&radius);
    area=pi *(radius*radius);
    circumference= 2*pi*radius;
    printf("area and circumference are %f and %f respectively",area,circumference);
    return 0;
    
}
