#include <iostream>
using namespace std;

void wishBirthDay(int n)
{
    // Base Case
    if (n == 0)
    {
        cout << "Happy Birthday\n";
        return;
    };
    cout << n << " day's left for Birthday\n";
    wishBirthDay(n - 1);
};

int main()
{
    // WISHING BIRTHDAY BEFORE 5 OF DATE
    // int n = 5;
    // // using itrative method
    // while (n > 0)
    // {
    //     cout << n << " day's left for the birthday\n";
    //     n--;
    // }

    // cout << "Happy Birthday";

    wishBirthDay(10);
}