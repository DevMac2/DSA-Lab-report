# Python program to find factorial of given number

# Function to find factorial of given number
def factorial(n):
 if(n==0):
    return 1    # Base case to stop the iteration
 else:
    return n*factorial(n-1)   # Recursive Call

# Driver Code
num=int(input("Enter a number: "))
print("The factorial of", num ,"is",factorial(num))
