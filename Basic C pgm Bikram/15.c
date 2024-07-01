#include<stdio.h>
int main()
{
    long int milimeter;
    double Km,meter,Centimeter;
    printf("Enter Milimeter: ");
    scanf("%ld",&milimeter);
    Km=milimeter/1000000;
    meter=milimeter/1000;
    Centimeter=milimeter/10;
    printf("\nKilometer = %0.2f",Km);
    printf("\nMeter = %0.2f",meter);
    printf("\nCentimeter = %0.2f",Centimeter);
    return 0;
}