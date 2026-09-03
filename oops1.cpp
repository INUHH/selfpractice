#include<iostream>
using namespace std;
class employee{
    private:
    int empid;
    string name;
    int salary;
    public:
    void input();
    void display();
};
    void employee::input(){
        cin>>empid;
        cin>>name;
        cin>>salary;
    }
    void employee::display(){
        cout<<"Employee ID: "<<empid<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
    int main(){
        employee e;
        e.input();
        e.display();
        return 0;
    }