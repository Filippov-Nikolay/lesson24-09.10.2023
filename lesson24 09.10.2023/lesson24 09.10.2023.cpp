#include <iostream>
#include "Student.h"

using namespace std;

int main() {
    setlocale(0, "");
    srand(time(0));

    int* assessments = new int[5];
    for (int i = 0; i < 5; i++)
        assessments[i] = 11 + rand() % (12 - 10);
    

    Student student("Николай", 18, "ITStep", "Содовая", "ООП", "КНП-221", 5, assessments);
    student.PrintHuman();
    student.PrintUniversity();
    student.PrintStudent();

    return 0;
}
