#include <stdio.h>
#include<stdlib.h>
void heapify(int a[10],int n)
{
  int i,k,j,value,x;
  for(i=n/2;i>=1;i--)
  {
    k=i;
    value=a[k];
    x=0;
    while(!x && 2*k<=n)
    {
      j=2*k;
      if(j<n)
      {
        if(a[j]<a[j+1])
        j=j+1;
      }
      if(value>=a[j])
      {
       x=1;
      }
       else
       {
        a[k]=a[j];
        k=j;
       } 
    }
       a[k]=value;
  }
}
int main()
{
  int i,n,choice,a[10];
do
  {
    printf("\n1. Enqueue\n2. Dequeue\n3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
      case 1:
      printf("Enter the no. of elements: ");
      scanf("%d",&n);
      printf("Enter elements to enqueue:\n");
      for(i=1;i<=n;i++)
      scanf("%d",&a[i]);
      heapify(a,n);
      printf("Elements after heap:");
      for(i=1;i<=n;i++)
      printf("%d\t",a[i]);
      break;
      case 2:
      if(n>=1)
      {
        printf("Element deleted is: %d\n",a[1]);
        a[1]=a[n];
        n=n-1;
        heapify(a,n);
        printf("Elements after deletion: ");
        for(i=1;i<=n;i++)
        printf("%d\t",a[i]);
      }
      else
      {
      printf("Queue is empty.");
      break;
      }
      default:
      break;
    }
  }while (choice!=3);
  return 0;
}
    