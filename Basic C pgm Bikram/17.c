#include<stdio.h>
int main()
{
    int n,sum=0,rem,temp;
    printf("Enter 3 digit number: ");
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    printf("\nSum of digits of %d = %d",temp,sum);
    return 0;
}