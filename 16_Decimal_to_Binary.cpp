#include <iostream>
using namespace std;

int main()
{
    // convert n number to binary
    /*
    int num, r, mul, ans;
    cout << "enter the value of num: ";
    cin >> num;
    mul = 1, ans = 0;

    while (num > 0)
    {
        r = num % 2;
        num = num / 2;
        ans = r * mul + ans;
        mul = mul * 10;
    }
    cout << ans;
    */

    // convert n binary to number
    /*
    int num, r, mul, ans;
    cout << "enter the value of num: ";
    cin >> num;
    mul = 1, ans = 0;

    while (num)
    {
        r = num % 10;
        num = num / 10;
        ans = r * mul + ans;
        mul = mul * 2;
    }
    cout << ans;
    */
    // convert n number to octa
    int num, r, mul, ans;
    cout << "enter the value of num: ";
    cin >> num;
    mul = 1, ans = 0;

    while (num)
    {
        r = num % 8;
        num = num / 8;
        ans = r * mul + ans;
        mul = mul * 10;
    }
    cout << ans;
}