#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("Enter any three digit number\n");
    scanf("%d",&n);
    while(n!=0)
    {
     sum= sum + n % 10;
     n=n/10;
    }
    printf("The sum of threen digit mumber is %d",sum);
    return 0;
}