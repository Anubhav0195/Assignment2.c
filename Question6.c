#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character\n");
    scanf("%c",&c);
    //%d displays the interger value of a charater 
    //%c displays the actual character
    printf("ASCII value of %c =%d",c,c);



    return 0;
}