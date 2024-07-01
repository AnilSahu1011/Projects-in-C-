#include<stdio.h>
#include<math.h>
int main()
{
    float inches,cm;
    printf("Enter distance in inches: ");
    scanf("%f",&inches);
    cm=inches*2.54;
    printf("\n%.2f inch = %.2f cm",inches,cm);
    return 0;
}