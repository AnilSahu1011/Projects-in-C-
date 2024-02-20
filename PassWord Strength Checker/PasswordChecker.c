// Strong Password Checker
// Password must be 8 to 12 character
// Password must be contains :
// Atleast one Upper Character
// Atleast one Lower Character
// Atleast one Special Character
// Atleast one Digit

#include<stdio.h>
#include<stdlib.h>

// User defined functions

int stringLength(char string[]);    //Find length of the string
int isUpperCase(char string[]);     //Check uppaer case is present or not in a String
int isLowerCase(char string[]);     //Check lowe case is present or not in a String
int checkdigit(char string[]);      //Check digit is present or not in a String
int isSpecial(char string[]);       //Check special characters are present or not is present or not in a String

// Starting main function
int main()
{
    int passWordLength;
    char passWord[13];
    system("cls");
    printf("~~~~~ Password Strength Checker ~~~~~");
    printf("\n\nEnter your Password: ");
    scanf("%[^\n]s",passWord);

    passWordLength = stringLength(passWord);

    if(passWordLength>12)
    {
        system("cls");
        printf("~~~~~ Password Strength Checker ~~~~~");
        printf("\n\nPassword: %s",passWord);
        printf("\n\nYour Password is too long\n(More than 12 character...)\n\n");
        return 0;
    }
    else if(passWordLength<8)
    {
        system("cls");
        printf("~~~~~ Password Strength Checker ~~~~~");
        printf("\n\nPassword: %s",passWord);
        printf("\n\nYour Password is too Small\n(Less than 8 character...)\n\n");
        return 0;
    }
    else
    {
        if(isUpperCase(passWord) && isLowerCase(passWord) && checkdigit(passWord) && isSpecial(passWord))
        {
            system("cls");
            printf("~~~~~ Password Strength Checker ~~~~~");
            printf("\n\nPassword: %s",passWord);
            printf("\n\nStrong Password\n\n");
        }
        else if(isUpperCase(passWord) && isLowerCase(passWord) && checkdigit(passWord) )
        {
            system("cls");
            printf("~~~~~ Password Strength Checker ~~~~~");
            printf("\n\nPassword: %s",passWord);
            printf("\n\nMedium Password\n\n");
        }
        else
        {
            system("cls");
            printf("~~~~~ Password Strength Checker ~~~~~");
            printf("\n\nPassword: %s",passWord);
            printf("\n\nWeak Password\n\n");
        }
    }
}

int stringLength(char string[])
{
    int i=0,count=0;
    while (string[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}

int isUpperCase(char string[])
{
    int i=0;
    while (string[i]!='\0')
    {
        if(string[i]>=65 && string[i]<=90)
        {
            return 1;
        }
        i++;
    }
    return 0;
}

int isLowerCase(char string[])
{
    int i=0;
    while (string[i]!='\0')
    {
        if(string[i]>=97 && string[i]<=122)
        {
            return 1;
        }
        i++;
    }
    return 0;
}

int checkdigit(char string[])
{
    int i=0;
    while (string[i]!='\0')
    {
        if(string[i]>=48 && string[i]<=57)
        {
            return 1;
        }
        i++;
    }
    return 0;
}

int isSpecial(char string[])
{
    int i=0;
    while (string[i]!='\0')
    {
        if ( (string[i]>=32 && string[i]<=47) || (string[i]>=58 && string[i]<=64) || 
                (string[i]>=91 && string[i]<=96) || (string[i]>=123 && string[i]<=126))
        {
            return 1;
        }
        i++;
    }
    return 0;
}