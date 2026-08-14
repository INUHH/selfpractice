#include <iostream>
using namespace std;

// Call by Value
void value(int x)
{
    x = x + 5;
}

// Call by Reference
void reference(int &x)
{
    x = x + 5;
}

// Call by Address
void address(int *x)
{
    *x = *x + 5;
}

int main()
{
    int a;
    cin>>a;

    value(a);
    cout << "After Call by Value: " << a << endl;

    reference(a);
    cout << "After Call by Reference: " << a << endl;

    address(&a);
    cout << "After Call by Address: " << a << endl;

    return 0;
}