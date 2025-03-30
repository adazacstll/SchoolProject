#include <iostream>
using namespace std;

void displayGrade(const char* gradeName) {
    cout << "Your grade is: " << gradeName << endl;
}

int main() {
    const char* grades[] = {"A", "B", "C", "D", "F"};
    int numGrades = sizeof(grades) / sizeof(grades[0]);

    for (int i = 0; i < numGrades; ++i) {
        displayGrade(grades[i]);
    }

    return 0;
}
