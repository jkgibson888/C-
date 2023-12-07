#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "degree.h"
using namespace std;

//TO DO: create student class
class Student {
	public:
		~Student();
	    //getter for each variable
		string GetStudentID();
		string GetFirstName();
		string GetLastName();
		string GetEmailAddress();
		int GetStudentAge();
		int* GetClassDays(); //problems
		DegreeProgram GetDegreeProgram();

		//setter for each variable
		void SetStudentID(string sID);
		void SetFirstName(string fName);
		void SetLastName(string lName);
		void SetEmailAddress(string eAddress);
		void SetStudentAge(int sAge);
		void SetClassDays(int crsArray[]);
		void SetDegreeProgram(DegreeProgram sdegree);

		//constructor using all inputs variables
		Student();
		Student(string ID, string fName, string lName, string eAddress, int sAge, int classesArray[], DegreeProgram sdegree);

		//print()
		void Print();

		//create variables student ID, first name, last name, email address, age, array of days, degree program;
	private:
		const int NUM_ELEMENTS = 3;
		string studentID;
		string firstName;
		string lastName;
		string emailAddress;
		int studentAge;
		int classDays[3];
		DegreeProgram degree;
};
