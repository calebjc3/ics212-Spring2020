#include<stdio.h>
#include<string.h>

/*
 * Caleb Cheshire
 * The purpose of this program is to use structures in a C program.
 * Date Created: 20 February 2020
 */

/*
 * Variables to track items and clear the buffer
 */
int checkInc = 1;
int bookCount = 1;
char temp [50];

/*
 * Check structure
 */
struct check {
	int num;
	char date[10];
	char to[30];
	float amount;
	char descrip[30];
};

/*
 * Creates the checkbook
 */
struct check checkbook[11];

/* FUNCTIONS */

/*
 * Creates the add function and returns the new check
 */
struct check add() {

	struct check newCheck;

	/* Requests and records user input of check number to track the checks */
	printf("Type in the number of the check: ");
	scanf("%d", &newCheck.num);
	
	/* Removes extra newline */
	fgets(temp, 50, stdin);
	
	/* Requests and records user input of date */
	printf("Enter date in dd/mm/yy format: ");
	fgets(newCheck.date, 9, stdin);

	/* Removes extra newline */
	fgets(temp, 50, stdin);

	/* Requests and records user input of recipient */
	printf("Enter the recipient of the check: ");
	fgets(newCheck.to, 30, stdin);

	/* Requests and records user input of check amount */
	printf("Enter the amount of the check in decimal format: ");
	scanf("%f", &newCheck.amount);
	
	/* Removes extra newline */
	fgets(temp, 50, stdin);

	/* Requests and records user input of a memo or description */
	printf("Enter a Description: ");
	fgets(newCheck.descrip, 30, stdin);

	/* Displays check information to the user */
	printf("-------------------------\n");
	printf("Check Number: %d\n", newCheck.num);
	printf("Date: %s\n", newCheck.date);
	printf("To: %s\n", newCheck.to);
	printf("Amount: %.2f\n", newCheck.amount);
	printf("Description: %s\n", newCheck.descrip);
	printf("-------------------------\n");

	/* Increments the check tracker to keep checks in order */
	checkInc++;
	
	return newCheck;
}

/* 
 * Function to display a check 
 */
void displayCheck(struct check thisCheck) {

	printf("-------------------------\n");
	printf("Check #: %d\n", thisCheck.num);
	printf("Date: %s\n", thisCheck.date);
	printf("To: %s\n", thisCheck.to);
	printf("Amount: %.2f\n", thisCheck.amount);
	printf("Description: %s\n", thisCheck.descrip);
	printf("-------------------------\n");
}

/*
 * Function to display the checkbook
 */
void displayCheckbook() {
	printf("Your checkbook: \n");
	for (int i = 0; i < checkInc; i++) {
		displayCheck(checkbook[i]);
	}
}

/*
 * Main function
 */
int main() {
	
	/* Keeps the user choice displayed */
	char choice = ' ';
	
	/* Displays greeting */
	printf("Aloha and welcome to your checkbook! Please select one of the options below: \n");

	/* Continues to run program while user does not want to exit */
	while ( choice != 'e') {

		/* Display selection options to the user */
		printf("Press 'a' to add a new check \n");
		printf("Press 'v' to view your checkbook \n");
		printf("Press 'c' to view a specific check \n");
		printf("Press 'e' to exit the program \n\n");
		printf("Enter your choice: \n");

		/* Gets the user choice */
		scanf("%c", &choice);

		if (choice == 'a' ) {
			checkbook[bookCount] = add();
			bookCount++;
		}

		else if (choice == 'v') {
			displayCheckbook();
			/* Removes extra newline */
			fgets(temp, 50, stdin);
		}

		else if (choice == 'c') {
			int i;
			printf("Enter the check number: \n");
			scanf(" %d", &i);
			displayCheck(checkbook[i]);
			/* Removes extra newline */
			fgets(temp, 50, stdin);
		}

		else if (choice == 'e') {
			printf("Mahalo for using your checkbook. Have a great day!");
			break;
		}

		else {
			printf("You must enter a valid option.");
		}
	}
	
	return(0);			

}

