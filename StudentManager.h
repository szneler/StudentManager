#ifndef __STUDENTMANAGER_H_INCLUDED
#define __STUDENTMANAGER_H_INCLUDED


#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "Student.h"

using namespace std;

class StudentManager
{
private:
	vector<Student> students;

	StudentManager();
	~StudentManager();

public:
	
	static StudentManager& getInstance();
	void addStudentToVector();
	void sortStudentListByID();
    void printStudentsList();
};

#endif
