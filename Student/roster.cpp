#include "pch.h"
#include "networkStudent.h"
#include "softwareStudent.h"
#include "securityStudent.h"
#include "roster.h"
#include "degree.h"
#include "student.h"
#include <iostream>
#include <string>



using namespace std;


int main() {
	
	cout << "Course title: C867, Programming Language Used: C++, Student ID: 000614343, Author: Wesley Emery" << endl;
	roster classroster;

	const string studentData[] ={ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY","A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK","A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY","A5,Wesley,Emery,wemery@wgu.edu,33,15,12,11,39,SOFTWARE" };
	
	for (int i = 0; i < 5; i++) {
		string s = studentData[i];
		/*parse temp and break it into , delimited. Change the string to the appropriate variable. Assign varibles for each token. Parsers are very common for parsing string.*/
		string delimiter = ",";

		int pos = 0;
		string token;
		string tmpstring[9];
		int j = 0;
		while ((pos = s.find(delimiter)) != std::string::npos) {
			token = s.substr(0, pos);
			tmpstring[j] = token;
			j++;
			s.erase(0, pos + delimiter.length());
		}
		
		Degree test ;
		if (s == "SECURITY") {
			test = SECURITY;
		}
		else if (s == "NETWORK") {
			test = NETWORK;
		}
		else if (s == "SOFTWARE") {
			test = SOFTWARE;
		}
		else {
			cout << "Invalid degree type." << endl;
		}
	
		classroster.add(tmpstring[0], tmpstring[1], tmpstring[2], tmpstring[3], stoi(tmpstring[4]), stoi(tmpstring[5]), stoi(tmpstring[6]), stoi(tmpstring[7]), test );
		classroster.printAll();

	 }


	return 0;
}
roster::roster()
{
}

void roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree)
{
	int daysInCourse[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };
	student *myStudent = nullptr;

	switch (degree) {
	case NETWORK:
		myStudent = new networkStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse, degree);
		break;

	case SECURITY:
		myStudent = new securityStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse, degree);
		break;

	case SOFTWARE:
		myStudent = new softwareStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse, degree);
		break;

	}


}


void roster::remove(string studentIdentification)
{
}

void roster::printAll()
{

	int i;
	for (i = 0; i < 5; i++) {
		(*classRosterArray[i]).print();
	}
	cout << endl;
}

void roster::printDaysInCourse(string studentIdentification)
{
}

void roster::printInvalidEmails()
{
}

void roster::printByDegreeProgram(Degree degreeProgram)
{
}

/* Sudocode for functions*/