#include <iostream>
using namespace std;

/*
string checkPal(string str, int start, int end)
{
    if (start >= end)
    {
        return "yay it's palindrome";
    };

    // not matched
    if (str[start] != str[end])
        return "it's not palindrome";
    else
        return checkPal(str, start + 1, end - 1);
}
*/
/*
int countVowels(string &str, int i)
{
    if (i == -1)
    {
        return 0;
    }

    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    {
        return 1 + countVowels(str, i - 1);
    }
    else
        return countVowels(str, i - 1);
}
*/
/*
void rev(string &str, int start, int end)
{

    if (start >= end)
        return;

    char c = str[start];
    str[start] = str[end];
    str[end] = c;
    rev(str, start + 1, end - 1);
}
*/

void LtoU(string &str, int i)
{
    if (i == -1)
        return;

    str[i] = 'A' + str[i] - 'a';
    LtoU(str, i - 1);
}

int main()
{
    /*
  // CHECK PALINDROME OR NOT
  string str = "naman";
  // cout << "Check your word palindrome or not: ";
  // cin >> str;

  cout << checkPal(str, 0, 5);
  */

    // COUNT VOWELS IN A WORD
    /*
    string str;
    int length;
    cout << "Enter any word: ";
    cin >> str;
    cout << "Enter your word length: ";
    cin >> length;

    cout << countVowels(str, length);
    */

    // REVERSE A STRING
    /*
    string str;
    int n;
    cout << "Enter any word for reverse: ";
    cin >> str;
    cout << "Enter word length: ";
    cin >> n;
    rev(str, 0, n - 1);
    cout << str << endl;
    */

    // convert lowercase to uppercase
    string str;
    int i;
    cout << "Enter lowercase word to convert uppercase: ";
    cin >> str;
    cout << "Enter word length: ";
    cin >> i;
    LtoU(str, i - 1);
    cout << str << endl;
}