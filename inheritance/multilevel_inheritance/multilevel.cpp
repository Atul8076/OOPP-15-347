#include <iostream>
#include <string>
using namespace std;

class person {
    protected:
    string name;

    public:
    person(string name) : name{name} {}

    void inroduce() {
        cout << "MY name is " << name << endl;
    }
};

class employee : public person {
    protected:
    int salary;
    
    public:
    employee(string name, int salary) : person(name), salary{salary} {}

    void monthly_salary() {
        cout << "my monthly salary is " << salary << endl;
    }
};

class manager : public employee {
    protected:
    string department;

    public:
    
    manager(string name, int salary, string department) 
        : employee(name, salary), department{department} {}

    void work() {
        cout << " work in the " << department << " department" << endl;
    }
};

int main() {
    manager A1("atul ", 20000, "Finance");
    A1.inroduce();
    A1.monthly_salary();
    A1.work();
    return 0;
}
