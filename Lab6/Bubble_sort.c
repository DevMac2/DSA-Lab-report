// Implementation of bubblesort in C

#include<stdio.h>
#include<stdlib.h>

// Function to swap two integers
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

// Function to take input
void input(int A[],int n)
{
    for(int i=0;i<n;i++)
    A[i]=rand();        // using rand() to generate random integers
}

// Function to display the array
void display(int A[],int n)
{
    for(int i=0;i<n;i++)
    printf("%d\t",A[i]);
    printf("\n");
}

// Function to perform bubble sort
void bubblesort(int A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(&A[j],&A[j+1]);
            }
        }
    }
}

// Driver Code
int main()
{
    int A[1000];
    int n,l,r;
    printf("Enter the size of input: ");   // Taking input from user
    scanf("%d",&n);

    // Displaying the array before sorting
    printf("Before Sorting: \n");
    input(A,n);
    display(A,n);
    printf("\n");

    // Performing bubble sort and displaying the sorted array
    printf("After Sorting: \n");
    bubblesort(A,n);
    display(A,n);
    printf("\n");
    return 0;
}

// End of Code.