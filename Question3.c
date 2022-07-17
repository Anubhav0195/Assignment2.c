#include<stdio.h>
int main()
{
    int a=6,b=7;
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("new value of a=%d and b=%d", a,b);



    return 0;
}