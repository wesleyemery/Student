#include "pch.h"
#include "networkStudent.h"
#include <iostream>
using namespace std;



Degree networkStudent::getDegreeProgram()
{
	return this->degree;
}

void networkStudent::print()
{
	cout << "Student ID: " << getStudentID() << "\t";
	cout << "First name: " << getFirstName() << "\t" << "Last name: " << getLastName() << "\t";
	cout << "Age: " << getAge() << "\t" << "Days in Course: " << getDaysToComplete() << "\t";
	cout << "Days in course: " << getDaysToComplete()[0] << ", " << getDaysToComplete()[1] << ", " << getDaysToComplete()[2] << "\t";
	cout << "Degree program: " << getDegreeProgram() << "\t";
}

networkStudent::networkStudent(string studentIdentification, string fName, string lName, string email, int studentAge, int * daysComplete, Degree degreeType)
	: student(studentIdentification, fName, lName, email, studentAge, daysComplete)
{
	this->degree = degreeType;

}



