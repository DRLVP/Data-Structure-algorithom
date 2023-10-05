#include <iostream>
using namespace std;

int main()
{
    // PRINT N NUMBER TABLE
    /*
    int i, num;
    cout << "enter the value of num: ";
    cin >> num;
    i = 1;
    while (i <= 10)
    {
        cout << num << " * " << i << " = " << num * i << endl;
        i++;
    }
    */

    // PRINT FACTORIAL OF ENTERED NUMBER

    // int i, num, x;
    // cout << "enter the value of num: ";
    // cin >> num;
    // cout << "enter the value of x: ";
    // cin >> x;
    // i = 1;
    /*
    while (i <= num)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
        i++;
    }
    */

    // do
    // {
    //     if (num % i == 0)
    //     {
    //         cout << i << " ";
    //     }
    //     i++;

    // } while (i <= num);

    // while (i <= num)
    // {
    //     cout << i << " ";
    //     if (i == x)
    //     {
    //         break;
    //     }
    //     i++;
    // }

    // while (i <= 10)
    // {
    //     if (i % num == 0)
    //     {
    //         continue;
    //     }
    //     cout << i << " ";
    //     i++;
    // }
    int i;
    cout << "Enter the value of i: ";
    cin >> i;
    switch (i)
    {
    case 1:
        cout << "Rohit";
        break;
    case 2:
        cout << "gill";
        break;
    case 3:
        cout << "virat";
        break;
    case 4:
        cout << "iyer";
        break;
    case 5:
        cout << "rahul";
        break;
    case 6:
        cout << "hardik";
        break;
    case 7:
        cout << "jaddu";
        break;
    case 8:
        cout << "ashwin";
        break;
    case 9:
        cout << "bumrah";
        break;
    case 10:
        cout << "kuldeep";
        break;
    case 11:
        cout << "shami";
        break;
    default:
        cout << "India, India";
        break;
    }
}