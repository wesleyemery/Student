#pragma once
#include "student.h"
class roster
{
private:
	student* classRosterArray[5];
	int index = 0; 

public:
	roster();
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree);
	void remove(string studentIdentification);
	void printAll();
	void printDaysInCourse(string studentIdentification);
	void printInvalidEmails();
	void printByDegreeProgram(Degree degreeProgram);
	student** getClassRosterArray();

};

