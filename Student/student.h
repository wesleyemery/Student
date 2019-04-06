#pragma once
#include <iostream>
#include "degree.h"
#include "pch.h"
#include <string>

using  namespace std;

class student
{
private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysToComplete[3];

public:
	//Accessors
	int* getDaysToComplete();
	int getAge();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	string getStudentID();
	//Mutators 
	void setDaysToComplete(int, int, int);
	void setAge(int);
	void setFirstName(string);
	void setLastName(string);
	void setEmailAddress(string);
	void setStudentID(string);
	//Virtual funtions
	virtual void print();
	virtual Degree getDegreeProgram();
	//Constructor
	student(string studentIdentification, string fName, string lName, string email, int studentAge, int* daysComplete);
	//Deconstructor
	~student();
};

