// C program for TOH using recursion
// Tower of Hanoi (TOH) puzzle
#include <stdio.h>
void move(int n, char source, char destination, char temporary)
{
    if (n == 0)
        return;
    move(n-1, source, temporary, destination);
    printf("Move disc %d from rod %c to rod %c\n", n, source, destination);
    move(n-1, temporary, destination, source);
}

// Driver Code
int main() {
    int n;  // Number of discs
    printf("Enter the number of discs: ");
    scanf("%d",&n);
    move(n, 'A', 'C', 'B'); // A, B and C are names of rods 
    return 0;
}