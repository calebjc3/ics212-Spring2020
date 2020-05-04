/*
 * Assignment 12, ICS212 - Implementing Encapsulation in C++ classes
 * Caleb Cheshire
 * Date Created: 19 April 2020
 * Purpose: Use encapsulation in a C++ class
 */

#include <iostream>
#include <string>

using namespace std;

// Person class
class Person {

	private:
		string name;
		string campus;

	// Public functions
	public:
		void set_name(string thisName);	//Sets person name
		void set_campus(string thisCampus);	// Sets person's campus
		void display_info();	// Display's person's info

};

// Implementations
void Person::set_name(string thisName) {
	name = thisName;
}

void Person::set_campus(string thisCampus) {
	campus = thisCampus;
}

void Person::display_info() {
	cout << "Person: " << name << ", " << campus << "\n";
}

// Main
int main() {

	Person personList[5]; // Person array

	// First person
	personList[0].set_name("Spongebob Squarepants");
	personList[0].set_campus("Windward CC");

	// Second person
	personList[1].set_name("Phineas Ferb");
	personList[1].set_campus("UH Manoa");

	// Third person
	personList[2].set_name("Charlie Brown");
	personList[2].set_campus("Kapiolani CC");

	for (int i = 0; i < 5; i++) {
		personList[i].display_info();	// Display each person's info
	}

	return 0;
}
