#pragma once
#include <iostream>
#include "Human.h"
#include "University.h"

using namespace std;

class Student : public Human, public University {
	string group;
	int numberOfRatings;
	int* assessments;
public:
	Student(string name, int age, string nameUn, string addresUn, string facultyUn, string g, int nor, int* ats);
	~Student();

	void InputStudent();
	void PrintStudent();


	string GetGroup() const;
	int GetNumberOfRatings() const;
	int* GetAssessments() const;


	void SetGroup(string);
	void SetNumberOfRatings(int);
	void SetAssessments(int*);
};

