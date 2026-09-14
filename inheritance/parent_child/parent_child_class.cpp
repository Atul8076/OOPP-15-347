#include <iostream>
#include <string>
using namespace std;

class human {
public:
    string name;
    int weight, height;

    
    human(string name, int weight, int height) 
        : name(name), weight(weight), height(height) {}
};

class student : public human {
private:
    int roll, fees;

public:
    
    student(string name, int weight, int height) 
        : human(name, weight, height) {}
};

int main() {
    student A("atul", 55, 5);
    return 0;
}