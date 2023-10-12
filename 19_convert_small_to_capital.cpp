#include <iostream>
#include <cmath>
using namespace std;

// char convert(char alpha)
// {
//     char ans = alpha - 'a' + 'A';
//     return ans;
// }

int countDigit(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n /= 10;
    }
    return count;
};

bool Armstrong(int n, int digit)
{
    int num = n, ans = 0, rem;
    while (num)
    {
        rem = num % 10;
        num /= 10;
        ans = ans + pow(rem, digit);
    };

    if (ans == num)
        return 1;
    else
        return 0;
}

int main()
{
    // convert small to capital
    /*
    char alpha;
    cout << "Enter any alphabet a-z: ";
    cin >> alpha;

    cout << convert(alpha);

    return 0;
    */

    // ARMSTRONG NUMBER
    int num;
    cout << "Check your entered number is Armstrong or not: ";
    cin >> num;
    int digit = countDigit(num);
    cout << Armstrong(num, digit);
}