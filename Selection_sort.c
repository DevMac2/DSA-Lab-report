// C program to implements the selection sort algorithm to sort an array of integers in ascending order.
// It first takes input the size of the array from the user, generates n random integers using rand(),
// sorts them using selection sort algorithm and finally displays the sorted array.
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

// Function to perform selection sort
void selectionsort(int A[],int n)
{
    int p,least;
    for(int i=0;i<n;i++)
    {
        p=i;
        least=A[i];
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<least)
            {
                least=A[j];
                p=j;
            }
        }
        if(i!=p)
        swap(&A[i],&A[p]);
    }
}

// Driver Code
int main()
{
    int A[1000];
    int n;
    printf("Enter the size of input: ");   // Taking input from user
    scanf("%d",&n);

    // Displaying the array before sorting
    printf("Before Sorting: \n");
    input(A,n);
    display(A,n);
    printf("\n");

    // Performing bubble sort and displaying the sorted array
    printf("After Sorting: \n");
    selectionsort(A,n);
    display(A,n);
    printf("\n");
    return 0;
}

// End of Code.