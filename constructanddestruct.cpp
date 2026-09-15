#include<iostream>
using namespace std;
class object{
    public:
    object(){
        cout<<"Constructer: "<<this<<'\n';
    }
    ~object(){
        cout<<"Desturcter: "<<this<<'\n';
    }
};
int main(){
    object*objects=new object[3];
    object*p1=&objects[0];
    object*p2=&objects[1];
    object*p3=&objects[2];
    cout<<"p1="<<p1<<endl;
    cout<<"p2="<<p2<<endl;
    cout<<"p3="<<p3<<endl;
    delete[] objects;
    objects=nullptr;
    
}