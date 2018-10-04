#include<stdio.h>
int main()
{
    char ch;

    scanf("%c",&ch);

    if(ch>='a' && ch<='z'){printf("The character is lower case");}

    if(ch>='A' && ch<='Z'){printf("The character is upper case");}

    return 0;
}
