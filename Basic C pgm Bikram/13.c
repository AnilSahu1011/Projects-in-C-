#include<stdio.h>
#include<math.h>
int main()
{
    const int a,b,c,d,x;
    float t;
    printf("Enter the value a: ");
    scanf("%d",&a);
    printf("Enter the value b: ");
    scanf("%d",&b);
    printf("Enter the value c: ");
    scanf("%d",&c);
    printf("Enter the value d: ");
    scanf("%d",&d);
    printf("Enter the value x: ");
    scanf("%d",&x);
    t=((a*pow(x,3))+(b*pow(x,2))+(c*x)+d);
    printf("Value of t = %.3f",t);
    return 0;
}