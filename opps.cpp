#include <bits/stdc++.h>
#include<string>
using namespace std;
class student{
    private:
    string name;
    int rollno;
    float marks;
    public:
    void input(){
        cin>>name;
        cin>>rollno;
        cin>>marks;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Rollno: "<<rollno<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main() {
	student s;
	s.input();
	s.display();
	return 0;

}
