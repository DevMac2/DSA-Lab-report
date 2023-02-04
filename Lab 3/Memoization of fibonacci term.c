// C program to implement memoization
// Memoization of Fibonacci term computation
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// Function to calculate nth term of the Fibonacci 
// sequence using a memoization approach
int mfibo(int n)
{
    static int table[100] = {0};  // Static array to store intermediate results
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        if (table[n] == 0)
        {
            table[n] = mfibo(n-1) + mfibo(n-2);
        }
        return table[n];
    }
}
// Driver function
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The %dth Fibonacci term is %d\n", n, mfibo(n));
    return 0;
}