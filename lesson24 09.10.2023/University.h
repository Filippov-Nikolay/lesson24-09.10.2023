#pragma once
#include <iostream>

using namespace std;

class University {
	string nameUn;
	string addresUn;
	string facultyUn;
public:
	University(string, string, string);

	void InputUniversity();
	void PrintUniversity();


	string GetNameUn() const;
	string GetAddresUn() const;
	string GetFacultyUn() const;


	void SetNameUn(string);
	void SeAddresUn(string);
	void SetFacultyUn(string);
};