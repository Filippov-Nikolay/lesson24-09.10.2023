#pragma once
#include <iostream>

using namespace std;

class Human {
	string name;
	int age;
public:
	Human(string, int);

	void InputHuman();
	void PrintHuman();


	string GetName() const;
	int GetAge() const;


	void SetName(string);
	void SetAge(int);
};

