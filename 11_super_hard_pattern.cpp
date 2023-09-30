#include <iostream>
using namespace std;

int main()
{
    // PRINT PIRAMOD * PATTERN
    /*
    int row, col, num;
    cout << "enter the value of num: ";
    cin >> num;

    for (row = 1; row <= num; row++)
    {
        // print space
        for (col = 1; col <= num - row; col++)
        {
            cout << "  ";
        }
        // print *
        for (col = 1; col <= 2 * row - 1; col++)
        {
            cout << "*"
                 << " ";
        }

        cout << endl;
    }
    */

    // PRINT 1 TO ROW & ROW-1 TO 1;

    int row, col, num;
    cout << "enter the value of num: ";
    cin >> num;

    for (row = 1; row <= num; row++)
    {
        // print space
        for (col = 1; col <= num - row; col++)
        {
            cout << "  ";
        }
        // print 1 to row
        for (col = 1; col <= row; col++)
        {
            cout << col << " ";
        }

        // print row-1 to 1
        for (col = row - 1; col >= 1; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}