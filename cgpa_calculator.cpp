#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numCourses;
    float totalCreditHours = 0;
    float totalGradePoints = 0;

    cout << "Enter number of courses taken: ";
    cin >> numCourses;

    string courseName[100];
    float grade[100];
    float creditHours[100];

    for (int i = 0; i < numCourses; i++)
    {
        cout << "\nCourse " << i + 1 << endl;

        cout << "Enter course name: ";
        cin >> courseName[i];

        cout << "Enter grade point: ";
        cin >> grade[i];

        cout << "Enter credit hours: ";
        cin >> creditHours[i];

        totalCreditHours += creditHours[i];
        totalGradePoints += grade[i] * creditHours[i];
    }

    float GPA = totalGradePoints / totalCreditHours;

    float previousCGPA;
    int previousCredits;

    cout << "\nEnter previous CGPA: ";
    cin >> previousCGPA;

    cout << "Enter previous completed credit hours: ";
    cin >> previousCredits;

    float CGPA =
        ((previousCGPA * previousCredits) + totalGradePoints) /
        (previousCredits + totalCreditHours);

    cout << "\n========== RESULT ==========\n";

    cout << left << setw(15) << "Course"
         << setw(10) << "Grade"
         << setw(10) << "CH" << endl;

    for (int i = 0; i < numCourses; i++)
    {
        cout << left << setw(15) << courseName[i]
             << setw(10) << grade[i]
             << setw(10) << creditHours[i] << endl;
    }

    cout << "\nTotal Credit Hours : " << totalCreditHours << endl;
    cout << "Total Grade Points : " << totalGradePoints << endl;
    cout << "Semester GPA       : " << fixed << setprecision(2) << GPA << endl;
    cout << "Overall CGPA       : " << fixed << setprecision(2) << CGPA << endl;

    return 0;
}

