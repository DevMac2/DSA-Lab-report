// Implementation of Quick sorting technique
// Includes the header file
#include<stdio.h>
#include<stdlib.h>
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

// Defines a function partition, which accepts an integer array and two integers as arguments
int partition(int A[],int l,int r)
{
    int x,y;
    x=l;
    y=r;
    int pivot=A[l];
    while(x<y)
    {
        while(A[x]<=pivot)
        x++;
        while(A[y]>pivot)
        y--;
        if(x<y)
        swap(&A[x],&A[y]);   // Calls the swap function with the address of A[x] and A[y] as arguments
    }
    swap(&A[l],&A[y]);      // Calls the swap function with the address of A[l] and A[y] as arguments
    return y;
}

// Defines a function quicksort, which accepts an integer array and two integers as arguments
void quicksort(int A[],int l,int r)
{
    if(l<r)
    {
        int p=partition(A,l,r);
        quicksort(A,l,p-1);           // Recursively calls quicksort with arguments A, l, and p-1
        quicksort(A,p+1,r);          // Recursively calls quicksort with arguments A, p+1, and r
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
    printf("After Quick Sorting:\n");
    quicksort(A,0,n-1);         // Calls the quicksort function with arguments A, 0, and n-1
    display(A,n);
    return 0;
}