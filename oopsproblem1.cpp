#include <iostream>
using namespace std;
class Person {
private:
    string name;
public:
    Person(string n);
    string getName();
};
class Student:public Person {
private:
    int roll;
public:
    Student(string n, int r);
    inline int getRoll();
    void display();
};
Person::Person(string n) {
    name=n;
}
string Person::getName() {
    return name;
}
Student::Student(string n, int r) : Person(n) {
    roll=r;
}
inline int Student::getRoll() {
    return roll;
}
void Student::display() {
    cout<<"Name: "<<getName()<<endl;
    cout<<"Roll No: "<<getRoll()<<endl;
}
int main() {
    Student s("riya", 101);
    s.display();
    return 0;
}