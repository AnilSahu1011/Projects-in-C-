#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,discriminate,r1,r2;
    printf("Enter coefficients a: ");
    scanf("%f",&a);
    printf("\nEnter coefficients b: ");
    scanf("%f",&b);
    printf("\nEnter coefficients c: ");
    scanf("%f",&c);
    discriminate=(b*b)-(4*a*c);
    if(discriminate>0)
    {
        r1=(-b+sqrt(discriminate))-(4*a*c);
        r2=(-b-sqrt(discriminate))-(4*a*c);
        printf("\nReal root-1 = %f",r1);
        printf("\nReal root-2 = %f",r2);
    }
    else if(discriminate==0)
    {
        r1=(-b/(2*a));
        printf("\nReal root = %f",r1);
    }
    else{
        float real_part,imaginary_part;
        real_part=-b/(2*a);
        imaginary_part=sqrt(discriminate)/2*a;
        printf("\nRoot-1 = %.2f + %.2fi",real_part,imaginary_part);
        printf("\nRoot-2 = %.2f + %.2fi",real_part,imaginary_part);
    }
    return 0;
}