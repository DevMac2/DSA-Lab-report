// C program to find factorial of given number
// Factorial using recursion
#include<stdio.h>
long int factorial(int n)  //Function to find factorial of given number
{
    if(n==0)
    return 1;  //base condition to stop the iteration
    else
    return n*factorial(n-1);  // Recursive Call
}

//Driver Code
int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    printf("The factorial of %d is %ld\n",n,factorial(n));
    return 0;
}
