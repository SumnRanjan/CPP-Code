#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int grade1, grade2, grade3;

public:
    // Constructor to initialize the student object
    Student(string n, int g1, int g2, int g3) {
        name = n;
        grade1 = g1;
        grade2 = g2;
        grade3 = g3;
    }

    // Function to calculate the average
    float calculateAverage() {
        return (grade1 + grade2 + grade3) / 3.0;
    }
};

int main() {
    // Create three student objects
    Student student1("John Doe", 85, 90, 78);
    Student student2("Jane Doe", 92, 88, 76);
    Student student3("Jim Doe", 78, 82, 90);

    // Calculate and display the average for each student
    cout << student1.calculateAverage() << endl;
    cout << student2.calculateAverage() << endl;
    cout << student3.calculateAverage() << endl;

    return 0;
}
