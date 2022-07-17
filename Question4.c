#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    printf("Before Swaping Value of a = %d and b = %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swaping Value of a=%d and b=%d",a,b);
    return 0;
}