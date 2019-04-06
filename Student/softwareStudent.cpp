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
	cout << "First name: " << getFirstName() << "\t";
	cout << "Last name: " << getLastName() << "\t";
	cout << "Age: " << getAge() << "\t";
	cout << "Days in Course: " << getDaysToComplete() << "\t";
	cout << "Degree program: " << getDegreeProgram() << "\t";
}

softwareStudent::softwareStudent(string studentIdentification, string fName, string lName, string email, int studentAge, int * daysComplete, Degree degreeType)
	: student(fName, lName, email, studentIdentification, studentAge, daysComplete)
{
	degreeType = this->degree;
}
