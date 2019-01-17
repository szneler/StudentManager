#include "StudentManager.h"


using namespace std;

StudentManager:: StudentManager() {
}

StudentManager:: ~StudentManager() {   
}

StudentManager& StudentManager::getInstance() {
	static StudentManager instance;
	return instance;
}

void StudentManager::addStudentToVector()
{
	unsigned int studentTranscriptIDFromUser;
    string studentFirstNameFromUser, studentSurnameFromUser;

    cout << "Enter the student first name: ";
	cin >> studentFirstNameFromUser;
    cout << "Enter the student surname: ";
    cin >> studentSurnameFromUser;
    cout << "Enter the student transcript ID: ";
	cin >> studentTranscriptIDFromUser;
    Student newStudent(studentTranscriptIDFromUser, studentFirstNameFromUser, studentSurnameFromUser);
	students.push_back(newStudent);
    cout << "Student saved. Press enter to continue.";
	cin.ignore();
    getchar();
}
