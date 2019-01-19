#include <iostream>
#include <string>
#include <sstream>
#include "Student.h"
#include "StudentManager.h"

using namespace std;

int main()
{
    auto& managerS = StudentManager::getInstance();

    string choosenOption;
	char option;
	

	for (;;)
	{
		cout << "MAIN MENU" << endl;
		cout << "-----------------" << endl;
		cout << "1. Add Student" << endl;
		cout << "2. Sort Students by ID" << endl;
		cout << "3. Delete Student" << endl;
		cout << "4. Exit" << endl;
		fflush(stdin);
        managerS.printStudentsList();
		cout << endl << "Select option: ";
		getline(cin, choosenOption);
        
		stringstream(choosenOption) >> option;
			
		switch (option)
		{
		case '1':
            managerS.addStudentToVector();
			break;

		case '2':
            managerS.sortStudentListByID();
			break;

		case '3':
            managerS.eraseStudentRecordByID();
			break;
	
        case '4':
			exit(0);

		default: 
			cout << "Enter value between 1 and 4!";
			getchar();
			break;
		}
		system("clear");
	}

	return 0;
}
