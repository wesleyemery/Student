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
	cout << "|********************  Student Info  ********************|" << endl;
	cout << "Course title: Scripting and Programming Applications C867" << endl;
	cout << "Programming Language Used: C++" << endl;   
	cout << "Student ID : 000614343" << endl;
	cout <<  "Author : Wesley Emery" << endl;

	roster classroster;

	const string studentData[] ={ 
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Wesley,Emery,wemery@wgu.edu,33,12,11,39,SOFTWARE" };
	
	for (int i = 0; i < 5; i++) {
		string s = studentData[i];
		string delimiter = ",";

		int index = 0;
		string token;
		string tmpstring[9];
		int j = 0;
		while ((index = s.find(delimiter)) != std::string::npos) {
			token = s.substr(0, index);
			tmpstring[j] = token;
			j++;
			s.erase(0, index + delimiter.length());
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

	 }
	cout << endl << "|***********************************************  Student Roster  ****************************************************|" << endl;
	classroster.printAll();
	cout << endl << "|***********************************************  Student Average Days  ****************************************************|" << endl;
	for (int j = 0; j < 5; j++) {
		classroster.printDaysInCourse(classroster.getClassRosterArray()[j]->getStudentID());
	}
	//loop through all of the student Id's
	cout << endl << "|***********************************************  Student by Degree  ****************************************************|" << endl;
	classroster.printByDegreeProgram(SOFTWARE);
	
	//classroster.printInvalidEmails();
	

	


	return 0;
}


roster::roster()
{
}

void roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree)
{
	int daysInCourse[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };

	switch (degree) {
	case NETWORK:
		classRosterArray[index] = new networkStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse, degree);
		break;

	case SECURITY:
		classRosterArray[index] = new securityStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse, degree);
		break;

	case SOFTWARE:
		classRosterArray[index] = new softwareStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse, degree);
		break;

	}
	index++;

}


void roster::remove(string studentIdentification)
{
	
	for (int i = 0; i < sizeof(classRosterArray); i++) {
		if (classRosterArray[i]->getStudentID() == studentIdentification) {
			classRosterArray[i] = nullptr;
		}
		else {
			cout << "Error student was not found." << endl;
		}

	}
}

void roster::printAll()
{
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i] != nullptr) {
			classRosterArray[i]->print();

		}
	}
}

void roster::printDaysInCourse(string studentIdentification)
{
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i]->getStudentID() == studentIdentification) {
			float sum = 0.0;
			for (int j = 0; j < 3; j++) {
				sum += classRosterArray[i]->getDaysToComplete()[j];
			}
			sum = sum / 3;
			cout << "Student ID: " << studentIdentification << "\t Name: " <<  classRosterArray[i]->getFirstName() << " " << classRosterArray[i]->getLastName() << "\t Average days in course: " << sum << endl; 

		}
	}
	
}
//Verifies student email addresses and displays all invalid email addresses to the user
void roster::printInvalidEmails()
{
	
	for (int i = 0; i > 5; i++) {
		string email = classRosterArray[i]->getEmailAddress();
		if (email.find("@") != string::npos) {
			cout << "The email for student: " << classRosterArray[i]->getFirstName() << " " << classRosterArray[i]->getLastName() << " is not valid: " << email << endl;
		}
	}
	//A valid email should include an at sign ('@') and period ('.') and should not include a space (' ')
}

void roster::printByDegreeProgram(Degree degreeProgram)
{
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i]->getDegreeProgram() == degreeProgram) {
			classRosterArray[i]->print();
		}
	}
}

student ** roster::getClassRosterArray()
{
	return classRosterArray;
}

