#include "University.h"


University::University(string n, string a , string f) {
	nameUn = n;
	addresUn = a;
	facultyUn = f;
}


void University::InputUniversity() {
	cout << "Введите название университета: ";
	cin >> nameUn;

	cout << "Введите адресс университета: ";
	cin >> addresUn;

	cout << "Введите факультет: ";
	cin >> facultyUn;
}
void University::PrintUniversity() {
	cout << "Название университета: " << nameUn << endl;
	cout << "Адрес университета: " << addresUn << endl;
	cout << "Факультет: " << facultyUn << endl;
}


string University::GetNameUn() const { return nameUn; }
string University::GetAddresUn() const { return addresUn; }
string University::GetFacultyUn() const { return facultyUn; }


void University::SetNameUn(string n) { nameUn = n; }
void University::SeAddresUn(string a) { addresUn = a; }
void University::SetFacultyUn(string f) { facultyUn = f; }
