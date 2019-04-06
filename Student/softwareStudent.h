#pragma once
#include "student.h"
#include "degree.h"
class softwareStudent :
	public student
{
private:
	Degree degree;
public:
	Degree getDegreeProgram();
	void print();
	softwareStudent(string studentIdentification,string fName, string lName, string email, int studentAge, int* daysComplete, Degree degreeType);

};

