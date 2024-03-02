#include <iostream>
using namespace std;

int main()
{
    // note :- upper case and lower case is not same while checking the palindrome 
            //  for example  nitin , NITIN both words are palindrome but  Nitin is not palindrome as the first character is in upper
            //  case and last character is in lowercase
  
    int n;
    cout << "enter the size of the character aray :";
    cin >> n;

    char arr[n];

    cout << "enter the word:";
    cin >> arr;

    bool check = 1; // initially assuming that given word is palindrome

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;
            break;
        }
    }

    if (check)
    {
        cout << "word is palindrome" << endl;
    }
    else
    {
        cout << "word is not palindrome ";
    }

    return 0;
}