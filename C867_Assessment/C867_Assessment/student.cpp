#include "student.h"

Student::~Student()
{
	//cout << "DELETING members" << endl;
}

string Student::GetStudentID()
{
	return studentID;
}

string Student::GetFirstName()
{
	return firstName;
}

string Student::GetLastName()
{
	return lastName;
}

string Student::GetEmailAddress()
{
	return emailAddress;
}

int Student::GetStudentAge()
{
	return studentAge;
}

int* Student::GetClassDays()
{
	int* arrayPointer = classDays;
	
	return arrayPointer;
}

DegreeProgram Student::GetDegreeProgram()
{
	return degree;
}

void Student::SetStudentID(string sID)
{
	this->studentID = sID;
}

void Student::SetFirstName(string fName)
{
	this->firstName = fName;
}

void Student::SetLastName(string lName)
{
	this->lastName = lName;
}

void Student::SetEmailAddress(string eAddress)
{
	this->emailAddress = eAddress;
}

void Student::SetStudentAge(int sAge)
{
	this->studentAge = sAge;
}

void Student::SetClassDays(int crsArray[])
{
	classDays[0] = crsArray[0];
	classDays[1] = crsArray[1];
	classDays[2] = crsArray[2];
}


void Student::SetDegreeProgram(DegreeProgram sdegree)
{
	this->degree = sdegree;
}

Student::Student()
{
	studentID = "NO ID";
	firstName = "NO FIRST";
	lastName = "NO LAST";
	emailAddress = "NO EMAIL";
	studentAge = 0;
	classDays[0] = 0;
	classDays[1] = 0;
	classDays[2] = 0;
	degree = SOFTWARE;
}

Student::Student(string ID, string fName, string lName, string eAddress, int sAge, int classesArray[], DegreeProgram sdegree)
{
	studentID = ID;
	firstName = fName;
	lastName = lName;
	emailAddress = eAddress;
	studentAge = sAge;
	classDays[0] = classesArray[0];
	classDays[1] = classesArray[1];
	classDays[2] = classesArray[2];
	degree = sdegree;
}

void Student::Print()
{
	cout << studentID << "\t" << "First Name: " << firstName;
	cout << "\t" << "Last Name: " << lastName << "\t";
	cout << "Age: " << studentAge << "\t    " << "daysInCourse: {";
	cout << classDays[0] << ", " << classDays[1] << ", " << classDays[2] << "}";
	cout << "\t" << "Degree Program: ";

	if (degree == 0) {
		cout << "Security";
	}

	if (degree == 1) {
		cout << "Network";
	}

	if (degree == 2) {
		cout << "Software";
	}

	cout << endl;

}


