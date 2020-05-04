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

	protected:
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

// Student Class
class Student : public Person {

	private:
		int studentID;	// Student's ID#
		string major;	//Student's major

	public:
		void set_ID(int theID);	// Sets ID
		void set_major(string theMajor);  // Sets major
		void display_student();	// Shows the student's info
};

// Implementations of Student Functions
void Student::set_ID(int theID) {
	studentID = theID;
}

void Student::set_major(string theMajor) {
	major = theMajor;
}

void Student::display_student() {
	cout << "Student Information: " << name << ", " << campus << ", " << studentID << ", " << major << "\n";
}

// Staff Class
class Staff : public Person {

	private:
		string staffID;	// Staff ID#
		string dept; // Staff department

	public:
		void set_staffID(string theID);	// Sets staff ID
		void set_dept(string theDept);	// Sets staff department
		void display_staff();	// Displays staff member info
};

// Implementations of Staff Functions
void Staff::set_staffID(string theID) {
	staffID = theID;
}

void Staff::set_dept(string theDept) {
	dept = theDept;
}

void Staff::display_staff() {
	cout << "Staff Information: " << name << ", " << campus << ", " << staffID << ", " << dept << "\n";
}

// Main
int main() {

	Student theStudent;
	Staff theStaff;

	// User input variables
	string studName;
	string studCampus;
	int setID;
	string studMajor;

	string staffName;
	string staffCampus;
	string staffID;
	string staffDept;

	// Get student info from user
	cout << "\nPLEASE ENTER THE STUDENTS INFORMATION: \n";

	cout << "Name: ";
	getline(cin, studName);

	cout << "Campus: ";
	getline(cin, studCampus);

	cout << "Major: ";
	getline(cin, studMajor);

	cout << "ID: ";
	cin >> setID;
	cin.get();

	// Pass student info to object, then display
	theStudent.set_name(studName);
	theStudent.set_campus(studCampus);
	theStudent.set_major(studMajor);
	theStudent.set_ID(setID);

	theStudent.display_student();

	// Get staff info from user
	cout << "\nPLEASE ENTER THE STAFF MEMBERS INFORMATION: \n";
	
	cout << "Name: ";
	getline(cin, staffName);

	cout << "Campus: ";
	getline(cin, staffCampus);

	cout << "Department: ";
	getline(cin, staffDept);

	cout << "ID: ";
	getline(cin, staffID);

	// Pass staff member info to object, then display
	theStaff.set_name(staffName);
	theStaff.set_campus(staffCampus);
	theStaff.set_dept(staffDept);
	theStaff.set_staffID(staffID);
	

	theStaff.display_staff();

	return 0;
}

