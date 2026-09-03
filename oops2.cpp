#include<iostream>
using namespace std;
float area(float r){
    return r*r;
}
float area(float l,float b){
    return l*b;
}
float simpleinterest(float p,float t,float r=10.0){
    return (p*r*t)/100;
}
int main()
{
    float squareSide=4.0;
    float length=5.0;
    float breadth=3.0;
    float principle=100.0;
    float time=2.0;
    cout<<"Area of circle: "<<area(5.0)<<endl;
    cout<<"Area of rectangle: "<<area(length,breadth)<<endl;
    cout<<"Simple Interest: "<<simpleinterest(principle,time)<<endl;
    return 0;
}