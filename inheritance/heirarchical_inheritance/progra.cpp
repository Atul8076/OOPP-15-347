#include <iostream>
using namespace std;

// Base Class (Parent)
class Animal {
public:
    void eat() {
        cout << "Eating food..." << endl;
    }
};

// Derived Class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks: Woof Woof!" << endl;
    }
};

// Derived Class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows: Meow Meow!" << endl;
    }
};

int main() {
    Dog d;
    Cat c;

    
    d.eat();
    d.bark();


    
    c.eat();
    c.meow();

    return 0;
}