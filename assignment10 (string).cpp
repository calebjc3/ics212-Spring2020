/*
 * Assignment 10, ICS212 - String (C++)
 * Caleb Cheshire
 * Date Created: 12 April 2020
 * Purpose: Use and manipulate C++ strings
 */

#include <iostream>
#include <string>

using namespace std;

int main() {

	// Strings for user name and state
	string name;
	string state;

	// Get user name
	cout << "Please enter your name: ";
	getline(cin, name);

	// Get user state
	cout << "Please enter your home state: ";
	getline(cin, state);

	// Print a greeting with user name, initials, and state
	cout << "\nAloha, " << name << ".\n";
	cout << "Your initials are " << name [0] << name [name.find(" ") + 1] <<".\n";
	cout << "Your home state is " << state << ".\n";

	return 0;
}