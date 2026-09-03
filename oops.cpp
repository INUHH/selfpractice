#include<iostream>
using namespace std;
class student{
    private:
    int rollno;
    string name;
    int age;
    int marks;
    public:
    void input(){
        cin>>rollno;
        cin>>name;
        cin>>age;
        cin>>marks;
    }
    void display(){
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
    int main(){
        student s;
        s.input();
        s.display();
        return 0;
    }