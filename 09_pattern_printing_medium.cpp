#include <iostream>
using namespace std;

int main()
{
    // int row, col;
    // for (row = 1; row <= 5; row++)
    // {
    //     for (col = 1; col <= row; col++)
    //     {
    //         cout << "*"
    //              << " ";
    //     }
    //     cout << endl;
    // }

    // int num, col;
    // for (num = 1; num <= 20; num++)
    // {
    //     for (col = 1; col <= num; col++)
    //     {
    //         cout << "-"
    //              << " ";
    //         /* code */
    //     }
    //     cout << endl;
    // }

    // int num, col;
    // for (num = 5; num <= 200; num += 5)
    // {
    //     for (col = 1; col <= num; col++)
    //     {
    //         cout << num
    //              << " ";
    //         /* code */
    //     }
    //     cout << endl;
    // }

    // int row, col;
    // for (row = 1; row <= 5; row++)
    // {
    //     for (col = row; col >= 1; col--)
    //     {
    //         cout << col << " ";
    //     }

    //     cout << endl;
    // }

    // PRINT A TO E EQUAL ROW TIMES
    /*
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        char name = 'a' + (row - 1);
        for (col = 1; col <= row; col++)
        {
            cout << name << " ";
        }
        cout << endl;
    }
    */

    //    PRINT * IN REVERSE ORDER ROW TIMES

    // int row, col;
    // for (row = 1; row <= 5; row++)
    // {
    //     // for (col = 5; col >= row; col--)
    //     // {
    //     //     cout << "* ";
    //     // }
    //     for (col = 1; col <= 5 - (row - 1); col++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    // PRINT 1 TO 5 IN REVERSE ORDER
    // int row, col;
    // for (row = 5; row >= 1; row--)
    // {
    //     for (col = 1; col <= row; col++)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // for (row = 1; row <= 5; row++)
    // {
    //     for (col = 1; col <= 5 - (row - 1); col++)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // for (row = 1; row <= 5; row++)
    // {
    //     for (col = 1; col <= 5 - row + 1; col++)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // PRINT 5 TO 1
    /*
    int row, col;

    for (row = 1; row <= 5; row++)
    {
        // for (col = 5; col >= 5 - row + 1; col--)
        // {
        //     cout << col << " ";
        // }
        for (col = 5; col >= 5 - row + 1; col--)
        {
            cout << col << " ";
        }

        cout << endl;
    }
    */
    int num;
    cout << "Enter the number of rows: ";
    cin >> num;

    for (int row = 1; row <= num - 1; row++)
    {
        // Print leading spaces
        for (int col = 1; col <= num - row; col++)
        {
            cout << "   ";
        }

        // Print numbers in descending order
        for (int col = row; col >= 1; col--)
        {
            cout << col << "  ";
        }

        // Move to the next line
        cout << endl;
    }
}