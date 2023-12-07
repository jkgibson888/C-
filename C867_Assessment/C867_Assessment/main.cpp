// C867_Assessment.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "student.h"
#include "roster.h"
#include <sstream>
#include <string>
using namespace std;

const string studentData[] = { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Joshua,Gibson,jgibs194@gmail.com,34,45,20,20,SOFTWARE" };

int main()
{

	//TO DO: print course title, programming language, wgu student id, and name
	cout << "Scripting and Programming-Applications-C867 " << "C++ " << "002204262 " << "Joshua Gibson" << endl;
	cout << endl;

	//TO DO: create instance of Roster class.... classRoster newArray
	Roster classRoster;

	//TO DO: Add each student to roster
	for (int i = 0; i < 5; ++i) {
		string newString = studentData[i];
		for (unsigned int j = 0; j < newString.length(); ++j) {
			if (newString[j] == ' ') {
				newString[j] = '\0';
		}
			if (newString[j] == ',') {
				newString[j] = ' ';
			}	
		}
		istringstream inSS(newString);
		string studentID;
		string firstName;
		string lastName;
		string emailAddress;
		int age;
		int course1;
		int course2;
		int course3;
		string degree;
		DegreeProgram program = SOFTWARE;

		inSS >> studentID;
		inSS >> firstName;
		inSS >> lastName;
		inSS >> emailAddress;
		inSS >> age;
		inSS >> course1;
		inSS >> course2;
		inSS >> course3;
		inSS >> degree;

		if (degree == "SECURITY") {
			program = SECURITY;
		}
		else if (degree == "NETWORK") {
			program = NETWORK;
		}
		else if (degree == "SOFTWARE") {
			program = SOFTWARE;
		}

		classRoster.Add(studentID, firstName, lastName, emailAddress, age, course1, course2, course3, program);

		}
	//TO DO: classRoster.printAll();
	classRoster.printAll();

	cout << endl;

	//TO DO: classRoster.printInvalidEmails()
	 classRoster.printInvalidEmails();

	 cout << endl;

	 //TO DO: print average days in course for all students (loop)
	 for (int i = 0; i < 5; ++i) {
		 if (classRoster.classRosterArray[i] != nullptr) {
			 classRoster.PrintAverageDaysInCourse(classRoster.classRosterArray[i]->GetStudentID());
		 }
	 }

	 cout << endl;

	 //TO DO: classRoster.printByDegreeProgram(SOFTWARE)
	 classRoster.PrintByDegreeProgram(SOFTWARE);

	 cout << endl;

	 //TO DO: classRoster.remove("A3")
	 classRoster.Remove("A3");

	 //TO DO: classRoster.printAll()
	 classRoster.printAll();

	 //TO DO: classRoster.remove("A3") ERROR: print message
	 classRoster.Remove("A3");

	 //TO DO: destructor to release memory;
	 for (int i = 0; i < 5; ++i) {
		 if (classRoster.classRosterArray[i] != nullptr) {
			 delete classRoster.classRosterArray[i];
			 classRoster.classRosterArray[i] = nullptr;
		 }
	 }


		
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
