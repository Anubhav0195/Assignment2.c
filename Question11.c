#include<stdio.h>
int main()
{
    int n,digit;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("Enter a digit\n");
    scanf("%d", &digit);
    n=n*10 +digit;
    printf("The resultant number is %d",n);




    return 0;
}