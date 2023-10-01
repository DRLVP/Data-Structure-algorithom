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
    */

    //    PRINT * PIRAMID IN REVERSE ORDER
    /*
    int row, col, num;
    cout << "enter the value of num: ";
    cin >> num;

    for (row = num; row >= 1; row--)
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

    // PRINT * IN SQUARE ORDER WITH SPACE
    /*
    int row, col, num;
    cout << "enter the value of num: ";
    cin >> num;

    for (row = num; row >= 1; row--)
    {
        // print *
        for (col = 1; col <= row; col++)
        {
            cout << "*"
                 << " ";
        }

        // print space
        for (col = 1; col <= 2 * num - 2 * row; col++)
        {
            cout << "  ";
        }

        // print * again
        for (col = 1; col <= row; col++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    for (row = 1; row <= num; row++)
    {
        // print *
        for (col = 1; col <= row; col++)
        {
            cout << "*"
                 << " ";
        }

        // print space
        for (col = 1; col <= 2 * num - 2 * row; col++)
        {
            cout << "  ";
        }

        // print * again
        for (col = 1; col <= row; col++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    */

    // PRINT BUTTERFLY  WITH *
    /*
    int row, col, num;
    cout << "Enter the value of num: ";
    cin >> num;

    for (row = 1; row <= num; row++)
    {
        // print *
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        // print space
        for (col = 1; col <= 2 * num - 2 * row; col++)
        {
            cout << "  ";
        }

        // print *
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // PRINT REVERSE *
    for (row = num - 1; row >= 1; row--)
    {
        // print *
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }

        // print space
        for (col = 1; col <= 2 * num - 2 * row; col++)
        {
            cout << "  ";
        }

        // print *
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    */

    // PRINT BORFI SHAPE
    int row, col, num;
    cout << "enter the value of num: ";
    cin >> num;

    for (row = 1; row <= num; row++)
    {
        // print space
        for (col = 1; col <= num - row; col++)
        {
            cout << " ";
        }
        // print star
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // print reverse

    for (row = num; row >= 1; row--)
    {
        // print space
        for (col = 1; col <= num - row; col++)
        {
            cout << " ";
        }
        // print star
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}