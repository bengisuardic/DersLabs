#include <iostream>
#include <string>

using namespace std;

class GradeBook {
public:
    GradeBook(string, string); // Constructor member for the instructor's name
    void setCourseName(string);  
    string getCourseName();   
    void setInstructorName(string); // New method to set the instructor's name
    string getInstructorName(); // New method to get the instructor's name
    void displayMessage(); 
private:
    string courseName;    
    string instructorName; // New data member for instructor's name
};

GradeBook::GradeBook(string name, string instructor) { 
    setCourseName(name);
    setInstructorName(instructor); // Set the instructor's name
}

void GradeBook::setCourseName(string name) {
    courseName = name;
}

string GradeBook::getCourseName() {
    return courseName;
}

void GradeBook::setInstructorName(string instructor) { // New method implementation
    instructorName = instructor;
}

string GradeBook::getInstructorName() { // New method implementation
    return instructorName;
}

void GradeBook::displayMessage() {
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
    cout << "This course is presented by: " << getInstructorName() << endl; // Modified to include instructor's name
}

int main() {
    GradeBook myGradeBook("Introduction to Programming", "Dr. Smith");
    myGradeBook.displayMessage();

    return 0;
}

