/* 
 * Assignment 8, ICS212 - Recursion
 * Caleb Cheshire
 * Date Created: 14 March 2020
 * Purpose: Use recursion in a C program.
 */


#include<stdio.h>

/* Function declaration */
int sum(int num);
int pwr(int base, int exp);

/* Main function */
int main() {
	
	/* variables for input, number, and exponent */
	int userInput, num, numPwr;
		
	/* while loop for user options */
	while (1) {
		
		/* Displays user instructions */
		printf("Enter 1 to add an integer's digits together. Enter 2 for the power function. Press 3 to exit the program.");
	
		/* Retrieves user input */
		scanf("%d", &userInput);

		/* If input is 1, run the sum function and display result */
		if (userInput == 1) {
			printf("Enter the number:");
			scanf("%d", &num);
			printf("The output of the sum function is %d \n", sum(num));
		
		/* If input is 2, run the power function and display result */	
		} else if (userInput == 2) {
			printf("Enter the base:");
			scanf("%d", &num);
			printf("Enter the exponent:");
			scanf("%d", &numPwr);
			printf("The output of the power function is %d \n", pwr(num, numPwr));

		/* If input is 3, exit the program */
		} else if (userInput == 3) {
			break;
		
		/* If input is invalid, alert user to input valid option */
		} else {
			printf("Please select a valid option. \n");
		}
	}
}

/*
 * Sum function
 * Takes the digits of the given integer and adds them
 * @param the num
 */
int sum(int num) {
	
	if(num != 0) {
		return (num % 10 + sum(num / 10));
	} else {
		return 0;
	}
}

/*
 * Pwr function
 * Calculates the power of a given integer and exponent
 * @param base the base
 * @param exp the power to which the base will be raised
 */
int pwr(int base, int exp) {
	
	if(exp == 0) {
		return 1;
	} else {
		return base * pwr(base, exp-1);
	}
}
