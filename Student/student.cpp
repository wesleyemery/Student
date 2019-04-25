#include "pch.h"
#include "student.h"
#include "degree.h"
#include <iostream>
using namespace std;

//Accessors
int * student::getDaysToComplete()
{
	return daysToComplete;
}

int student::getAge()
{
	return age;
}

string student::getFirstName()
{
	return firstName;
}

string student::getLastName()
{
	return lastName;
}

string student::getEmailAddress()
{
	return emailAddress;
}

string student::getStudentID()
{
	return studentID;
}

//Mutators 
void student::setDaysToComplete(int day1, int day2, int day3){
	this->daysToComplete[0] = day1;
	this->daysToComplete[1] = day2;
	this->daysToComplete[2] = day3;
}

void student::setAge(int studentAge)
{
	this->age = studentAge;
}

void student::setFirstName(string fName)
{
	this->firstName = fName;
}

void student::setLastName(string lName)
{
	this->lastName = lName; 
}

void student::setEmailAddress(string email)
{
	this->emailAddress = email;
}

void student::setStudentID(string studentIdentification)
{
	this->studentID = studentIdentification;
}
//Null Virtual Fuctions 
void student::print()
{

}

Degree student::getDegreeProgram()
{
	return NETWORK;
}
//Contructor 
student::student(string studentIdentification, string fName, string lName, string email, int studentAge, int* daysComplete )
{
	this->studentID = studentIdentification;
	this->firstName = fName;
	this->lastName = lName;
	this->emailAddress = email;
	this->studentID = studentIdentification;
	this->daysToComplete[0] = daysComplete[0];
	this->daysToComplete[1] = daysComplete[1];
	this->daysToComplete[2] = daysComplete[2];
	this->age = studentAge;

}

//Deconstructor
student::~student()
{
}
