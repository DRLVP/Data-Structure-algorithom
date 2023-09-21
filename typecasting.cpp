#include <iostream>
using namespace std;

int main()
{
    int a = 67;
    char b = 'b';
    // a = b; // this call typecasting
    b = a;
    cout << "the value of a : " << a << endl;
    cout << "the value of b : " << b;
}