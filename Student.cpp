#include "Student.h"

Student::Student() {
	newStudentTranscriptID = 0;
	newStudentFirstName = ' ';
	newStudentSurname = ' ';
}

Student::Student(unsigned int studentTranscriptID, string studentFirstName, string studentSurname) {
	newStudentTranscriptID = studentTranscriptID;
	newStudentFirstName = studentFirstName;
	newStudentSurname = studentSurname;
}

Student::~Student() {
}
