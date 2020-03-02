#include<stdio.h>

/*
 * Assignment 6 (Pointers)
 * Caleb Cheshire
 * The purpose of this program is to use and manipulate variables using pointers.
 * Date Created: 1 March 2020
 */

int main () {

	/* Creates int variables with different values */
	int firstValue = 1;
	int secondValue = 2;
	
	/* Creates 3 pointers */
	int *pointer1;
	int *pointer2;
	int *pointer3;

	/* Points first 2 pointers to the first value */
	pointer1 = &firstValue;
	pointer2 = &firstValue;
	
	/* Points third pointer to the second value */
	pointer3 = &secondValue;
	
	/* Display the memory addresses and values of both variables */
  	printf("-----------------\nMemory addresses and values:\n");

	printf("\nMemory address of the first variable= %x \nMemory address of the second variable = %x",&firstValue,&secondValue);
	printf("\n\nValue of the the first variable = %d \nValue of the second variable = %d", firstValue, secondValue);

	/* Display the contents of all pointers */
	printf("\n--------------------\nContents of pointers:\n");

	/* Display the values of the memory location each pointer points to */
	printf("\nPointer1 points to %x, the value of which is %d",pointer1,*pointer1);
	printf("\nPointer2 points to %x, the value of which is %d",pointer2,*pointer2);
	printf("\nPointer3 points to %x, the value of which is %d", pointer3,*pointer3);

	/* Change the value of the first variable */
	firstValue = 10;

	/* Display the value of the first variable */
	printf("\n\nThe value of the first variable has changed. The value is now: %d",firstValue);
	
	/* Display the values of the memory locations for the pointers that point to the first variable */
	printf("\n--------------------\nPointer memory locations:\n");
	
	if(pointer1 == &firstValue) {
		printf("\nPointer1 points to the first value. First Value = %d. The memory location of pointer 1 is %x", *pointer1, pointer1);
	}
	
	if(pointer2 == &firstValue) {
		printf("\nPointer2 points to the first value. First Value = %d. The memory location of pointer 2 is %x", *pointer2, pointer2);
	}	
	
	if(pointer3 == &firstValue) {
		printf("\nPointer3 points to the first value. First Value = %d. The memory location of pointer 3 is %x", *pointer3, pointer3);
	}
	
	
	/* Set value at pointer3 memory address */
	*pointer3 = 20;

	printf("\n\nThe memory location of pointer 3 is %x", pointer3);
	printf("\nThe value of the second variable is now: %d", secondValue);

	return 0;

}