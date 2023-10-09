#include "Student.h"

Student::Student(string name, int age, string nameUn, string addresUn, string facultyUn, string g, int nor, int* ats):
	Human(name, age), 
	University(nameUn, addresUn, facultyUn) {

	group = g;
	numberOfRatings = nor;
	assessments = new int[numberOfRatings];
	assessments = ats;
}

Student::~Student() {
	delete[] assessments;
}

void Student::InputStudent() {
	cout << "������� ������: ";
	cin >> group;

	cout << "������� ���-�� ������: ";
	cin >> numberOfRatings;

	cout << "������:" << endl;

	assessments = new int[numberOfRatings];

	for (int i = 0; i < numberOfRatings; i++) {
		cout << "������� " << i + 1 << "� ������: ";
		cin >> assessments[i];
	}
}

void Student::PrintStudent() {
	cout << "������: " << group << endl;
	cout << "���-�� ������: " << numberOfRatings << endl;
	
	for (int i = 0; i < numberOfRatings; i++)
		cout << assessments[i] << endl;
}


string Student::GetGroup() const { return group; }
int Student::GetNumberOfRatings() const { return numberOfRatings; }
int* Student::GetAssessments() const { return assessments; }


void Student::SetGroup(string g) { group = g; }
void Student::SetNumberOfRatings(int n) { numberOfRatings = n; }
void Student::SetAssessments(int* a) { 
	assessments = a; 
}
