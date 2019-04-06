#include "pch.h"
#include "securityStudent.h"
#include <iostream>


Degree securityStudent::getDegreeProgram()
{
	return this->degree;
}

void securityStudent::print()
{
	cout << "First name: " << getFirstName() << "\t";
	cout << "Last name: " << getLastName() << "\t";
	cout << "Age: " << getAge() << "\t";
	cout << "Days in Course: " << getDaysToComplete() << "\t";
	cout << "Degree program: " << getDegreeProgram() << "\t";
}

securityStudent::securityStudent(string studentIdentification, string fName, string lName, string email, int studentAge, int * daysComplete, Degree degreeType)
	: student(studentIdentification, fName, lName, email, studentAge, daysComplete)
{
	degreeType = this->degree;
}
