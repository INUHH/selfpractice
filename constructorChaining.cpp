#include<iostream>
using namespace std;
class student{
    public:
    int rollNo;
    int marks;
    student():student(101,80){
        cout<<"default constructor"<<endl;
        
    }
    student (int r,int m){
        rollNo=r;
        marks=m;
        cout<<"parametrized constructor called"<<endl;
    }
    void display(){
        cout<<"Roll:"<<rollNo<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
};
int main(){
    student s1;
    s1.display();
    return 0;
}