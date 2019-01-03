#include <stdio.h>
#include<conio.h>
void main()
{
    char chr;
    printf("Enter any character: ");
       scanf("%c",&chr);
    if( (chr>='a' && chr<='z') || (chr>='A' && chr<='Z'))
       {
        printf("The entered character %c is an Alphabet",chr);
        }
    else
       {
        printf("The entered character %c is not an Alphabet",chr);
        }
    getch;
}
