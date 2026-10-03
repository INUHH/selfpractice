#include <bits/stdc++.h>
using namespace std;
long long factorial(int n) {
    if(n <= 1) return 1;
    return n * factorial(n - 1);
}
long long fib(int n) {
    if(n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}
int main() {
    int n;
    cin >> n;
    cout << "Factorial = " << factorial(n) << endl;
    cout << "Fibonacci = " << fib(n) << endl;
    return 0;
}