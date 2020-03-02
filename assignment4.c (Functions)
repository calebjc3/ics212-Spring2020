#include<stdio.h> //Preprocessor to give info to the compiler

/*
 * Caleb Cheshire
 * The purpose of this program is to define, code, and use functions in C.
 * Date Created: 8 February 2020
 */

//Calls the multiplyNumbers and the findPower functions
long int multiplyNumbers(int n);
int findPower(int n1, int n2);

//Creates the main function and variables
int main() {
    int n;
    int base;
    int e;
    int result;

    //Asks user for input of numbers to find factorial and result of base^exponent
    printf("Enter a number to find the factorial: ");
    scanf("%d", &n);
    printf("Thanks! Now enter a base number: ");
    scanf("%d", & base);
    printf("Enter exponent: ");
    scanf("%d", &e);
    result = findPower(base, e);
    printf("Factorial of %d = %1d", n, multiplyNumbers(n));
    //Displays results of both calculations
    printf("\n%d^%d = %d", base, e, result);

    //Return statement
    return 0;
}

//Creates the factorial function with integer parameter
long int multiplyNumbers(int n) {
    //uses if-else statement to control user input
    if (n>=1)
	return n*multiplyNumbers(n-1);
    else
	return 1;
}

//Creates power function with two integer parameters
int findPower(int base, int e) {
    //uses if-else statement to control user input
    if (e !=0)
	return (base * findPower(base, e - 1));
    else
	return 1;
}
