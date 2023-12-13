#include <stdio.h>
#include <stdlib.h>

//Recursion function that multiplies n by n-1 until n becomes zero, which will exit the function and return 1 (to keep the multiplication the same)
int factorial(int n) {

    int a;

    if (n == 0) {
        return 1;
    }
 
    a = factorial(n-1);
    return(n*a);
}

int main(){

    int x;
//Asks for the user to provide a positive integer, and loops if the input is not a positive integer
    do{
        printf("Enter a positive integer:\n");
        scanf("%d", &x);
        if (x <= 0) {printf ("Invalid... Please enter a positive integer\n");}
    } while (x <= 0);
//It then calls the factorial function, storing it in the result variable, which will be printed afterwards
    int result = factorial(x);
    printf("The factorial of %d is %d", x, result);
    
    return 0;
}