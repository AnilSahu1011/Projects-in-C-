#include<stdio.h>
int main()
{
    int u,a,t;
    float S;
    printf("Enter the value u: ");
    scanf("%d",&u);
    printf("Enter the value a: ");
    scanf("%d",&a);
    printf("Enter the value t: ");
    scanf("%d",&t);
    S=(u*t)+(1/2*a*t*t);
    printf("Value of S = %.2f",S);
    return 0;
}