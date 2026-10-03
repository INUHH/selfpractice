#include <iostream>
using namespace std;
class Employee{
    private:
    int employeeId;
    string name;
    float salary;
    public:
    Employee() {
        employeeId=0;
        name="Unknown";
        salary=0;
    }
    Employee(int id,string n,float s){
        employeeId=id;
        name=n;
        salary=s;
    }
    Employee(const Employee &e) {
        employeeId=e.employeeId;
        name=e.name;
        salary=e.salary;
    }
    void updatesalary(float s){
        salary=s ;
    }
    void display() const{
        cout<<"ID:"<<employeeId<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
    };
int main(){
    const Employee e1(101,"Riya",50000);
    e1.display();
    Employee e2(e1);
    cout<<"Copied Employee:"<<endl;
    e2.display();
}    