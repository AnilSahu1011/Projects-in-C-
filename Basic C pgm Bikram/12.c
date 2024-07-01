#include<stdio.h>
#include<math.h>
int main()
{
    int u,a,s;
    float v;
    printf("Enter the value u: ");
    scanf("%d",&u);
    printf("Enter the value a: ");
    scanf("%d",&a);
    printf("Enter the value s: ");
    scanf("%d",&s);
    v=sqrt(pow(u,2)-(2*a*s));
    printf("Value of S = %.2f",v);
    return 0;
}