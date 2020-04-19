/*
 * Assignment 11, ICS212 - Classes & Objects (C++)
 * Caleb Cheshire
 * Date Created: 19 April 2020
 * Purpose: Create Classes and use Objects in C++.
 */

#include <iostream>
#include <string>

using namespace std;

// Warranty class
class Warranty {

	private:
		string make;
		string model;
		int manufactureYear;
		int warrantyLength;
		int currentYear = 2020;
	
	// Public functions
	public:
		void set_Make(string thisMake);  // Sets vehicle make
		void set_Model(string thisModel);  // Sets vehicle model
		void set_ManufactureYear(int thisManufactureYear);  // Sets vehicle year
		void set_WarrantyLength(int thisWarrantyLength);  // Sets warranty length

		string get_Make();  // Gets vehicle make
		string get_Model();  // Gets vehicle model
		int get_ManufactureYear();  // Gets manufacture year
		int get_WarrantyLength();  // Gets warranty length
		int get_CurrentYear();  // Gets current year

		bool calculate_Warranty();  // Calculates whether or not the warranty is valid

};

// Function implementation
void Warranty::set_Make(string thisMake) {
	make = thisMake;
}

void Warranty::set_Model(string thisModel) {
	model = thisModel;
}

void Warranty::set_ManufactureYear(int thisManufactureYear) {
	manufactureYear = thisManufactureYear;
}

void Warranty::set_WarrantyLength(int thisWarrantyLength) {
	warrantyLength = thisWarrantyLength;
}

string Warranty::get_Make() {
	return make;
}

string Warranty::get_Model() {
	return model;
}

int Warranty::get_ManufactureYear() {
	return manufactureYear;
}

int Warranty::get_WarrantyLength(){
	return warrantyLength;
}

int Warranty::get_CurrentYear() {
	return currentYear;
}


bool Warranty::calculate_Warranty() {
	int check = manufactureYear + warrantyLength - currentYear;
	if (check < 0)
		return false;

	return true;
}

// Main
int main() {

	char c = ' ';  // User option
	Warranty userVehicle;  //Object
	string userMake;  // User input
	string userModel;  // User input
	int userManufactureYear;  // User input
	int userWarrantyLength;  // User input

	cout << "Welcome to your vehicle warranty checker.";  // Print user greeting

	while (c != 'x') {  // While user option is not "exit"

		cout << "\n\nEnter 'a' to check a warranty or 'x' to exit the program: \n";  // User instructions

		cin.get(c);  // Get user input
		cin.get();

		if (c == 'x') {
			printf("Thank you for using the warranty checker. Aloha and goodbye!");
			break;

		} else {

			// User input
			cout << "Enter your vehicle make: ";
			getline(cin, userMake);

			cout << "Enter your vehicle model: ";
			getline(cin, userModel);

			cout << "Enter your vehicle manufacture year: ";
			cin >> userManufactureYear;

			cout << "Enter your warranty length: ";
			cin >> userWarrantyLength;


			// Pass user input to the object
			userVehicle.set_Make(userMake);
			userVehicle.set_Model(userModel);
			userVehicle.set_ManufactureYear(userManufactureYear);
			userVehicle.set_WarrantyLength(userWarrantyLength);

			userVehicle.calculate_Warranty();

			// Print the info
			cout << "\nVehicle make: " << userVehicle.get_Make();
			cout << "\n";
			cout << "Vehicle model: " << userVehicle.get_Model();
			cout << "\n";
			cout << "Manufacture year: " << userVehicle.get_ManufactureYear();
			cout << "\n";
			cout << "Warranty length: " <<userVehicle.get_WarrantyLength();
			cout << "\n";
			cout << "Current year: " << userVehicle.get_CurrentYear();
			cout << "\n";
			
			// Print if warranty is valid or not
			if (userVehicle.calculate_Warranty() == 0) {
				cout << "Your warranty is invalid";
			} else {
				cout << "Your warranty is valid";
			}
		}

		cin.get();  // Clear buffer
	}

	return 0;
}
