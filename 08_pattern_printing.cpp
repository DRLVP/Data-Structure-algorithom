// pattern printing in C++;
#include <iostream>
using namespace std;

int main()
{
    // PRINT 5LINE * IN 5 TIMES

    // for (int i = 0; i <= 5; i++)
    // {
    //     for (int j = 0; j <= 5; j++)
    //     {
    //         cout << "1"
    //              << " ";
    //     }

    //     cout << endl;
    // }
    // int row, col;
    // for (row = 1; row <= 5; row++)
    // {
    //     for (col = 1; col <= 5; col++) // print anything in 5 times

    //     {
    //         cout << row;
    //     }
    //     cout << endl;
    // }

    //+++++++++ PRINT 1 TO 5 IN 5 lines
    /*
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++) // print anything in 5 times

        {
            cout << col;
        }
        cout << endl;
    }
    */

    //+++++++++ PRINT 5 TO 1 IN 5 lines
    /*
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 5; col >= 1; col = col - 1) // print anything in 5 times

        {
            cout << col;
        }
        cout << endl;
    }
    */

    //+++++++++ PRINT 1 TO 5 square IN 5 lines
    /*
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            cout << col * col << " ";
        }

        cout << endl;
    }
    */

    //+++++++++ PRINT 1 TO 5 cube IN 5 lines
    // int row, col;
    // for (row = 1; row <= 5; row++)
    // {
    //     for (col = 1; col <= 5; col++)
    //     {
    //         cout << col * col * col * col << " ";
    //     }

    //     cout << endl;
    // }

    //+++++++++ PRINT a TO e  IN 5 lines
    // char alpha, num;
    // for (alpha = 'a'; alpha <= 'e'; alpha++)
    // {
    //     for (num = 1; num <= 5; num++)
    //     {
    //         cout << alpha << " ";
    //     }

    //     cout << alpha << endl;
    // };

    //+++++++++ PRINT a TO e  IN 5 lines
    /*
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        char name = 'a' + row - 1;
        for (col = 1; col <= 5; col++)
        {
            cout << name << " ";
        }

        cout << endl;
    }
    */

    // char al, num;
    // for (num = 1; num <= 5; num++)
    // {
    //     for (al = 'a'; al <= 'e'; al++)
    //     {
    //         cout << al << " ";
    //     }
    //     cout << endl;
    // }

    // +++++++++++++++ PRINT 1 TO 25 IN 5 LINES
    int count, row, col;
    count = 1;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            // cout << count << " ";
            cout << (row - 1) * 5 + col << " ";
            count++;
        }
        cout << endl;
    }
}