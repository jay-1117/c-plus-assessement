#include <iostream>
#include <string>

using namespace std;

// Define a class to represent lecture details
class Lecture {
public:
    // Data members
    string lecturerName;
    string subjectName;
    string courseName;
    int lectureNumber;

    // Constructor to assign initial values
    Lecture(string lecturer = "", string subject = "", string course = "", int lectureNum = 0) {
        lecturerName = lecturer;
        subjectName = subject;
        courseName = course;
        lectureNumber = lectureNum;
    }

    // Function to display name and lecture details
    void displayDetails() {
        cout << "Lecturer: " << lecturerName << endl;
        cout << "Subject: " << subjectName << endl;
        cout << "Course: " << courseName << endl;
        cout << "Lecture Number: " << lectureNumber << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    const int MAX_LECTURERS = 5;
    Lecture lectures[MAX_LECTURERS]; // Create an array of Lecture objects

    // Add lecture details for 5 lecturers
    for (int i = 0; i < MAX_LECTURERS; i++) {
        string lecturer, subject, course;
        int lectureNumber;

        // Input lecture details
        cout << "Enter lecturer name: ";
        getline(cin, lecturer);
        cout << "Enter subject name: ";
        getline(cin, subject);
        cout << "Enter course name: ";
        getline(cin, course);
        cout << "Enter lecture number: ";
        cin >> lectureNumber;

        // Create a Lecture object and add it to the array
        lectures[i] = Lecture(lecturer, subject, course, lectureNumber);

        // Clear input buffer
        cin.ignore();
    }

    // Display all lecture details
    cout << "\nLecture Details for All Lecturers:" << endl;
    for (int i = 0; i < MAX_LECTURERS; i++) {
        lectures[i].displayDetails();
    }

    return 0;
}

