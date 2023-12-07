#pragma once
#include "roster.h"


void Roster::printAll()
{
	for (int i = 0; i < 5; ++i) {
		if (classRosterArray[i] != nullptr) {
			classRosterArray[i]->Print();
		}
	}
}

void Roster::Add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram)
{
	int index = 0;
	int classArray[3];
	
	classArray[0] = daysInCourse1;
	classArray[1] = daysInCourse2;
	classArray[2] = daysInCourse3;

	for (int i = 0; i < 5; ++i) {
		if (classRosterArray[i] == nullptr) {
			classRosterArray[i] = new Student(studentID, firstName, lastName, emailAddress, age, classArray, degreeprogram);
			index = i;
			return;
		}
	}
}

void Roster::Remove(string studentID)
{
	for (int i = 0; i < 5; ++i) {
		string tempString;
		if (classRosterArray[i] == nullptr) {
			cout << endl;
			cout << "ERROR! " << studentID << " student not found." << endl;
			cout << endl;
		}
		else {
			tempString = classRosterArray[i]->GetStudentID();
		}
		if (tempString == studentID) {
			delete classRosterArray[i];
			classRosterArray[i] = nullptr;
		}
	}
}

void Roster::PrintAverageDaysInCourse(string studentID)
{
	int sum = 0;
	int* newArrayPointer;
	int newArray[3] = { 0, 0, 0 };

	for (int i = 0; i < 5; ++i) {
		if (classRosterArray[i] != nullptr) {
			if (classRosterArray[i]->GetStudentID() == studentID) {
				newArrayPointer = classRosterArray[i]->GetClassDays();
				int *ptr1 = &newArrayPointer[0];
				int *ptr2 = &newArrayPointer[1];
				int *ptr3 = &newArrayPointer[2];

				sum = *ptr1 + *ptr2 + *ptr3;

				cout << classRosterArray[i]->GetFirstName() << " " << classRosterArray[i]->GetLastName() << " average course days is: " << sum / 3 << endl;
			}
		}
	}
}

void Roster::printInvalidEmails()
{
	string tempEmail;
	int atcounter = 0;
	int periodcounter = 0;
	int spacecounter = 0;
	int j = 0;

	for (int i = 0; i < 5; ++i) {
		tempEmail = classRosterArray[i]->GetEmailAddress();
		atcounter = 0;
		periodcounter = 0;
		spacecounter = 0;
		for (int j = 0; j < tempEmail.length() - 1; ++j) {
			
			if (tempEmail[j] == '\0') {
				tempEmail[j] = ' ';
			}
			
				if (tempEmail[j] == '.') {
					++periodcounter;
				}
				else if (tempEmail[j] == '@') {
					++atcounter;
				}
				else if (tempEmail[j] == ' ') {
					++spacecounter;
				}
		}

		classRosterArray[i]->SetEmailAddress(tempEmail);
		if ((periodcounter < 1) || (atcounter < 1) || (spacecounter > 0)) {
			cout << tempEmail << " is not a valid email address" << endl;
		}
		atcounter = 0;
		periodcounter = 0;
		spacecounter = 0;

	}
}

void Roster::PrintByDegreeProgram(DegreeProgram degree)
{
	DegreeProgram tempDegree;

	for (int i = 0; i < 5; ++i) {
		tempDegree = classRosterArray[i]->GetDegreeProgram();

		if (tempDegree == degree) {
			classRosterArray[i]->Print();
		}
	}
}
