#pragma once
#include <iostream>
#include <string>
#include "student.h"
#include "degree.h"


class Roster {
	public:

		//TO DO: public void printAll()
		void printAll();

		//TO DO: public void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram)
		void Add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
		
		//TO DO: public void remove(string studentID)
		void Remove(string studentID);

		//TO DO: public void printAverageDaysInCourse(string studentID)
		void PrintAverageDaysInCourse(string student);

		//TO DO: public void printInvalidEmails()
		void printInvalidEmails();

		//TO DO: public void printByDegreeProgram(DegreeProgram degreeProgram)
		void PrintByDegreeProgram(DegreeProgram degree);

		//TO DO: create arry of pointers classRosterArray
		Student * classRosterArray[5] = { nullptr };
	




};