 #ifndef __STUDENT_H_INCLUDED
 #define __STUDENT_H_INCLUDED


#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	Student();

	Student(unsigned int, string, string);

	~Student();

	unsigned int getStudentTranscriptID() const;

	string getStudentFirstName() const;

	string getStudentSurname() const;

private:
	unsigned int newStudentTranscriptID;
	string newStudentFirstName, newStudentSurname;
};

#endif
