#include <iostream>
#include <string>


struct StudentData {
    int rollNo;
    std::string name;
    float marks;
};


void inputData(StudentData &s, int r, std::string n, float m) {
    s.rollNo = r;
    s.name = n;
    s.marks = m;
}

void printData(const StudentData &s) {
    std::cout << "Roll: " << s.rollNo 
            << " | Name: " << s.name 
            << " | Marks: " << s.marks << "\n";
}

int main() {
    StudentData s1;
    inputData(s1, 101, "Aarav", 85.5f);
    printData(s1);
    return 0;
}
