//Factorial of any number 
//Implementation of tail recursion
#include<stdio.h>
long int tailfact(int n,long int a)   //Function to find factorial of given number
{
    if(n==0)
    return a;     //base condition to stop the iteration
    else
    return tailfact(n-1,n*a);    //recursive call
}

//Driver Code
int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    printf("The factorial of %d is %ld",n,tailfact(n,1));
    return 0;
}
