#include "pch.h"
#include "securityStudent.h"
#include <iostream>


Degree securityStudent::getDegreeProgram()
{
	return this->degree;
}

void securityStudent::print()
{
	cout << getStudentID() << "\t";
	cout << "First name: " << getFirstName() << "\t";
	cout << "Last name: " << getLastName() << "\t";
	cout << "Age: " << getAge() << "\t";
	cout << "\t Days in Course: " << getDaysToComplete()[0] << "\t";
	cout << "Days in Course: " << getDaysToComplete()[1] << "\t";
	cout << "Days in Course: " << getDaysToComplete()[2] << "\t";
	cout << "Degree program: Security" << endl;
}

securityStudent::securityStudent(string studentIdentification, string fName, string lName, string email, int studentAge, int * daysComplete, Degree degreeType)
	: student(studentIdentification, fName, lName, email, studentAge, daysComplete)
{
	degree = degreeType;
}
