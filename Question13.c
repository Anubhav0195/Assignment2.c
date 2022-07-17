#include<stdio.h>
int main()
{
    int n , m;
    printf("Enter any three digit number : ");
    scanf("%d",&n);
    m = n % 100;
    n = n / 100;
    n = m * 10 + n;
    printf("%d",n);
    return 0;
  
}