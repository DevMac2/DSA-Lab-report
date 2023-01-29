// IMPLEMENTATION OF STACK AS AN ADT
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
#define false 0
#define true 1
struct Stack
{
    int TOP;
    int data [MAX];
};
int isFull(struct Stack S)
{
   return (S.TOP == MAX-1)? true:false;
}
int isEmpty(struct Stack S)
{
    return (S.TOP == -1)?true:false;
}
void push(struct Stack *S, int element)
{
    if (isFull(*S))
        printf("STACK OVERFLOW.\n");
    else
    {
        //S->TOP +=1;
        S->data[++S->TOP]=element;
        printf("SUCCESS\n");
    }
}
int pop(struct Stack *S)
{
    if (isEmpty(*S))
    {
        printf("Stack underflow");
        return -1;
    }
    else
        return S->data[S->TOP--];
}
int main()
{
    int choice, element;
    struct Stack Anything ={-1};
    do
    {
       printf(" 1. Push\n 2. Pop\n 3. Exit\n");
       printf("Enter the choice: ");
       scanf("%d",&choice);
       switch(choice)
       {
        case 1:
            printf("Enter element:\n");
            scanf("%d",&element);
            push(&Anything, element);
            break;
        case 2:
            printf("%d was popped\n",pop(&Anything));
            break;
        case 3:
            printf("Bye Bye\n"); 
            break;   
        default:
            break;

       }
    } while (choice!=3);
    return 0;
}