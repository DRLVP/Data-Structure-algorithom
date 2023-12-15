#include <iostream>
using namespace std;

// void print(int num, int N)
// {
//     if (num == N)
//     {
//         cout << num;
//         return;
//     }

//     cout << num << endl;
//     print(num + 1, N);
// }
/*
 void print(int N)
{
    if (N == 1)
    {
        cout << 1 << endl;
        return;
    }

    print(N - 1);
    cout << N << endl;
}
*/
// void printEven(int num, int N)
// {
//     if (num > N)
//     {
//         return;
//     }

//     cout << num << " ";
//     printEven(num + 2, N);
// }

void printEven(int N)
{
    if (N == 2)
    {
        cout << 2 << " ";
        return;
    }

    printEven(N - 2);
    cout << N << " ";
}

int main()
{
    // Print 1 to N
    // int N;
    // cout << "Enter the value of N: ";
    // cin >> N;
    // print(N);

    // PRINT 1 TO N (ALL EVEN NUMBER)
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    if (N % 2 == 1)
        N--;

    printEven(N);
}