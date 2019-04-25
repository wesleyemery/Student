#include "pch.h"
#include "softwareStudent.h"
#include <iostream>
using namespace std;



Degree softwareStudent::getDegreeProgram()
{
	return this->degree;
}

void softwareStudent::print()
{
	cout << getStudentID() << "\t";
	cout << "First name: " << getFirstName() << "\t";
	cout << "Last name: " << getLastName() << "\t";
	cout << "Age: " << getAge() << "\t";
	cout << "\t Days in Course: " << getDaysToComplete()[0] << "\t";
	cout << "Days in Course: " << getDaysToComplete()[1] << "\t";
	cout << "Days in Course: " << getDaysToComplete()[2] << "\t";
	cout << "Degree program: Software" << endl;
}

softwareStudent::softwareStudent(string studentIdentification, string fName, string lName, string email, int studentAge, int * daysComplete, Degree degreeType)
	: student(studentIdentification, fName, lName, email, studentAge, daysComplete)
{
	degree = degreeType;
}
