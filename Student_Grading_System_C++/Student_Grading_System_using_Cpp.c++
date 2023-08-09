
//Student_Grading_System_using_Cpp by RAMAVATH SANTHOSH
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct Student {
    string name;
    char grade;
};

char calculateGrade(double score) {
    if (score >= 91 && score <= 100) {
        return 'A';
    } else if (score >= 81 && score <= 90) {
        return 'B';
    } else if (score >= 71 && score <= 80) {
        return 'C';
    } else if (score >= 61 && score <= 70) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    vector<Student> students;
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        Student student;
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> student.name;
        double score;
        cout << "Enter the score of student " << i + 1 << ": ";
        cin >> score;
        student.grade = calculateGrade(score);
        students.push_back(student);
    }

    double sumGrades = 0.0;
    double highestGradeNumeric = 0.0; // Initialize to lowest possible
    double lowestGradeNumeric = 100.0; // Initialize to highest possible

    for (const auto& student : students) {
        sumGrades += student.grade;
        double numericGrade;
        switch (student.grade) {
            case 'A': numericGrade = 95; break;
            case 'B': numericGrade = 85; break;
            case 'C': numericGrade = 75; break;
            case 'D': numericGrade = 65; break;
            case 'F': numericGrade = 55; break;
        }
        if (numericGrade > highestGradeNumeric) {
            highestGradeNumeric = numericGrade;
        }
        if (numericGrade < lowestGradeNumeric) {
            lowestGradeNumeric = numericGrade;
        }
    }

    double averageGradeNumeric = sumGrades / numStudents;
    char averageGrade;

    if (averageGradeNumeric >= 92.5) {
        averageGrade = 'A';
    } else if (averageGradeNumeric >= 82.5) {
        averageGrade = 'B';
    } else if (averageGradeNumeric >= 72.5) {
        averageGrade = 'C';
    } else if (averageGradeNumeric >= 62.5) {
        averageGrade = 'D';
    } else {
        averageGrade = 'F';
    }

    cout << "\nStudent Grades Summary:\n";
    cout << "-----------------------\n";
    cout << left << setw(10) << "ID" << setw(10) << "Name" << setw(10) << "Grade" << "\n";
    cout << "-----------------------------------\n";
    int i=0;
    for (const auto& student : students) {
        cout << left << setw(10)<< (i+1) << setw(10)  << student.name << setw(10) << student.grade << "\n";
    }
    cout << "-----------------------------------\n";
    cout << "Average Grade: " << averageGrade << "\n";
    cout << "Highest Grade: " << calculateGrade(highestGradeNumeric) << " (" << highestGradeNumeric << ")\n";
    cout << "Lowest Grade: " << calculateGrade(lowestGradeNumeric) << " (" << lowestGradeNumeric << ")\n";

    return 0;
}
