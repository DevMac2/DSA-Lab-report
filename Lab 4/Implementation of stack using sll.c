// C Program to implement stack using sll
// Header File
#include<stdio.h>
#include<stdlib.h>

// Definition of a node in sll
struct sll
{
    int data;            // Data stored in the node
    struct sll *next;    // Pointer to the next node
};

// Pointer to the top node of the stack
struct sll *top;

void push(int element)
{
    // Allocate memory for the new node
    struct sll *NewNode = (struct sll*)malloc(sizeof(struct sll));
    
    // Check if memory allocation was successful
    if (NewNode == NULL)
    {
        printf("Memory allocation failed.");
    }
    else
    {
        NewNode->data = element;  // Store the data in the new node
        NewNode->next = NULL;

        // Update the linked list to make the new node the top node
        if (top == NULL)
        {
            top = NewNode;
        }
        else
        {
            NewNode->next = top;
            top = NewNode;
        }
        printf("%d is pushed.\n", top->data);
    }
}
int pop()
{
    int element;
    struct sll *temp;

    // Check if the stack is empty
    if (top == NULL)
    {
        printf("Stack underflow.\n");
        return -1;
    }
    else
    {
        element = top->data;
        if (top->next == NULL)
        {
            temp = top;
            free(temp);
            top = NULL;
        }
        else
        {
            temp = top;
            top = top->next;
            free(temp);
        }
        return element;
    }
}

// Driver Code
int main() 
{
    top = NULL;
    int choice, element;
    do
    {
        printf(" 1. Push\n 2. Pop\n 3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter the element: ");
                scanf("%d", &element);
                push(element);
                break;
            case 2:
                element = pop();
                printf("%d is popped out.\n", element);
                break;
            case 3:
                printf("Bye Bye.\n");
                break;
        }
    } while (choice != 3); // Repeat until the user selects "Exit"
    return 0;
}


