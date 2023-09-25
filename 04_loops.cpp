#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cout << "enter any number to get square: ";
    // cin >> n;
    // for (size_t i = 1; i <= n; i++)
    // {
    //     cout << "square of num: " << i << " is-- " << i * i << endl;
    // }

    // PRINT EVEN NUMBER

    int num;
    cout << "enter any number between 10 to 20: ";
    cin >> num;

    for (int i = 2; i <= num; i = i + 2)
    {
        cout << "even number is: " << i << endl;
    }
}