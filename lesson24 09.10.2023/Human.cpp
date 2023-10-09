#include "Human.h"

Human::Human(string n, int a) {
	name = n;
	age = a;
}

void Human::InputHuman() {
	cout << "Введите имя: ";
	cin >> name;

	cout << "Введите возраст: ";
	cin >> age;
}
void Human::PrintHuman() {
	cout << "Имя: " << name << endl;
	cout << "Возраст: " << age << endl;
}


string Human::GetName() const { return name; }
int Human::GetAge() const { return age; }


void Human::SetName(string n) { name = n; }
void Human::SetAge(int a) { age = a; }
