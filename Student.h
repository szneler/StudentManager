#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	Student();

	Student(unsigned int, string, string);

	~Student();

private:
	unsigned int newStudentTranscriptID;
	string newStudentFirstName, newStudentSurname;
};
