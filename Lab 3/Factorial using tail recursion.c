#include<stdio.h>
long int tailfact(int n,long int a)
{
    if(n==0)
    return a;
    else
    return tailfact(n-1,n*a);
}
int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    printf("The factorial of %d is %ld",n,tailfact(n,1));
    return 0;
}