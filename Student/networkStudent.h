#pragma once
#include "student.h"
#include "degree.h"
#include <string>
using namespace std;

class networkStudent : public student
{

private:
	Degree degree;
public:
	Degree getDegreeProgram();
	void print();
	networkStudent(string studentIdentification, string fName, string lName, string email, int studentAge, int* daysComplete, Degree degreeType);

	
};
