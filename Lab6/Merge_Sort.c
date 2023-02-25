// Implementation of Quick sorting technique
// Includes the header file
#include<stdio.h>
#include<stdlib.h>

// Declare global variables
int i,j;

// Defines a function swap, which accepts two integer pointers as arguments
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

// Defines a function input, which accepts an integer array and an integer as arguments
void input(int A[],int n)
{
    for(i=0;i<n;i++)        // Iterates from 0 to n-1
    A[i]=rand();            // Assigns a random value to the ith element of the array A
}

// Defines a function display, which accepts an integer array and an integer as arguments
void display(int A[],int n)
{
    for(i=0;i<n;i++)
    printf("%d\t",A[i]);
    printf("\n");
}

// Defines a function merge, which accepts an integer array and three integers as arguments
void merge(int A[],int l,int m,int r)
{
    int i = l;
    int j = m + 1;
    int k = l;
    int B[100];

    while (i <= m && j <= r)
    {
        if (A[i] < A[j])
            B[k++] = A[i++];          // If A[i] is smaller than A[j], A[i] is copied to B and i is incremented
        else
            B[k++] = A[j++];         // If A[j] is smaller than A[i], A[j] is copied to B and j is incremented
    }

    while (i <= m)                  // Copies the remaining elements from the first half of A to B
        B[k++] = A[i++];

    while (j <= r)                  // Copies the remaining elements from the second half of A to B
        B[k++] = A[j++];

    for (i = l; i <= r; i++)         // Copies the sorted elements of B back to A
        A[i] = B[i];
}

// Defines a function mergesort, which accepts an integer array and two integers as arguments
void mergesort(int A[],int l,int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergesort(A, l, m);            // Recursively calls mergesort on the first half of A
        mergesort(A, m + 1, r);       // Recursively calls mergesort on the second half of A
        merge(A, l, m, r);           // Calls merge to merge the sorted halves
    }
}

// Driver Code
int main()
{
    int A[1000];
    int n,l,r;
    printf("Enter the size of input: ");
    scanf("%d",&n);
    printf("\n");
    input(A,n);                  // Calls the input function with arguments A and n
    printf("Before Sorting:\n");
    display(A,n);
    printf("\n");
    printf("After Merge Sorting:\n");
    mergesort(A,0,n-1);           // Calls the mergesort function with arguments A, 0, and n-1
    display(A,n);                // Calls the display function with arguments A and n
    return 0;
}