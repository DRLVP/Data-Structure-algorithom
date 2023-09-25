#include <iostream>
using namespace std;

int main()
{
    // for (int i = 100; i <= 200; i++)
    // {
    //     cout << "here is your number: " << i << endl;
    // }

    // PRINT A TO Z
    // for (char name = 'a'; name <= 'z'; name++)
    // {
    //     cout << "your character is: " << name << endl;
    // }

    // PRINT 20 TO 1 IN DECENDING ORDER
    // int num;
    // for (num = 20; num >= 1; num--)
    // {
    //     cout << "here is your number: " << num << endl;
    // }

    // PRINT N NUMBER TABLE
    // int n;
    // cout << "enter any number : ";
    // cin >> n;

    // for (size_t i = 1; i <= 10; i++)
    // {
    //     cout << "table of- " << n << " * " << i << " is: " << n * i << endl;
    // }

    // PRINT N NUMBER  POWER

    // int n, pow, num, i;
    // cout << "enter the value of n: ";
    // cin >> n;
    // cout << "enter the value of power: ";
    // cin >> pow;
    // num = n;
    // for (i = 1; i < pow; i++)
    // {
    //     num = num * n;
    // }
    // cout << num;

    // SUM OF NATURAL NUMBER
    // int n, i, sum;
    // cout << "enter the value of n: ";
    // cin >> n;
    // sum = 0;
    // for (i = 1; i <= n; i++)
    // {
    //     sum = sum + i;
    // }
    // cout << sum;
    // cout << n * (n + 1) / 2;

    // FIND FACTORIAL
    /*
    int fact, i, n;
    cin >> n;
    fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << fact;
    */

    // CHECK INPUT NUMBER IS PRIME OR NOT

    int num;
    cout << "check your entered number is prime or not: ";
    cin >> num;

    if (num < 2)
    {
        cout << "not-prime|| enter valid number";
        return 0;
    }
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                cout << "your entered number is not prime";
                return 0; // program end;
            }
        }

        cout << "your entered number is prime";
    }

    return 0;
}
