#include <iostream>
using namespace std;

int main()
{
    // PRINT * IN ROW TIMES
    /*
    int row, col, num;
    cout << "enter the value of num: ";
    cin >> num;
    for (row = 1; row <= num; row++)
    {
        for (col = 1; col <= num - row; col++)
        {
            cout << "  ";
        }
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    */

    //    PRINT 1 TO N IN LEFT SIDE
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
        for (col = 1; col <= row; col++)
        {
            cout << row << " ";
        }

        cout << endl;

    }
    */

    //    PRINT 1 TO N IN LEFT SIDE
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
        for (col = 1; col <= row; col++)
        {
            cout << col << " ";
        }

        cout << endl;
    }
    */

    // PRINT A TO A+(ROW-1) IN RIGHT
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

        // charater print
        for (char name = 'A'; name <= 'A' + row - 1; name++)
        {
            cout << name << " ";
        }

        cout << endl;
    }
    */

    // PRINT 1 TO N IN LEFT
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

        // print num
        for (col = row; col >= 1; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}