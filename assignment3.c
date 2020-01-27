#include<stdio.h> //Preprocessor to give info to the compiler

/*
 * Caleb Cheshire
 * The purpose of this program is to accept input and manipulate character strings
 * Date Created: 20 January 2020
 */

//creates main
int main(void) 
{
    //creates name array of type char with size 50
    char name[50] = " ";
    //creates initials array of type char with size 10
    char initials[10] = " ";

    //creates integers i and j to be used for while loop
    int i = 1;
    int j = 2;

    //prints name prompt and takes user input
    printf("Aloha! Please enter your name:\n");
    fgets(name, sizeof(name),stdin);

    //accesses initials array and assigns characters from name array or other
    initials[0] = name[0];
    initials[1] = '.';

    //creates while loop to read through name array and find initials
    while (name[i] != '\0'){
	if (name[i] == ' '){
		initials[j] = name[i + 1];
		i++;
		initials[j + 1] = '.';
		j += 2;
	}
	i++;
    }
    initials[j] = '\0';

    //creates state array of type char with size 50
    char state[50];
    //prints prompt and takes user input of state
    printf("What is your home state?\n");
    fgets(state, sizeof(state),stdin);

    //prints a greeting including user input name and state, and program generated initials
    printf("Aloha, %s", name);
    printf("Initials: %s", initials);
    printf("\nHome state: %s", state);

    //ends main and returns system status of 0
    return 0;
}
