#include<stdio.h>
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    n=(n/10) * 10;
    printf("The value ids %d\n",n);
    return 0;
}