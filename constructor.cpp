#include <bits/stdc++.h>
using namespace std;
class student{
    int rollNo;
    string name;
    float marks;
    public:
    //default constructor
    student(){
        int rollNo=101;
        string name="Riya";
        float marks=0;
    }
    student(int r,string n){
        rollNo=r;
        name=n;
        marks=0;
    }
    student(int r,string n, float m){
        rollNo=r;
        name=n;
        marks=m;
    }
    void display(){
        cout<<rollNo<<" "<<name<<" "<<marks<<" "<<endl;
        
    }
};
int main() {
    student s1;
    student s2(101,"Rahul");
    student s3(102,"Aman",85.5);
    s1.display();
    s2.display();
    s3.display();
    return 0;
	

}