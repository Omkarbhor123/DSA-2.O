#include <iostream>
#include <string>

using namespace std;

int main()
{

    string str = "hello how are you?";
    // or

    string str1(7, 'A'); // initializing string str of size 7 with character A
    cout << "direct initialization of string:-" << endl;
    cout << endl;
    cout << str << endl;
    cout << "after initialization of string str1 of size 7 with character A:-" << endl;
    cout << endl;
    cout << str1 << endl;

    // to get input from user eventhough there is an space in the words

    // string abc;
    // cout << "enter the string :";
    // getline(cin, abc);
    // cout << "after taken input with spaces :-" << endl;
    // cout<<endl;
    // cout << abc << endl;

    // string concatination

    string x = "om";
    string y = "kar";

    string sum;
    sum = x + y;

    // cout << x.append(y) << endl;
    // -----or------
    cout << "after concatination of string x and y:-" << endl;
    cout << endl;
    cout << x + y << endl;

    cout << sum << endl;

    // accessign elements from the array

    cout << "after accessing particular element:-" << endl;
    cout << endl;
    cout << x[1] << " " << y[2] << endl;

    // deleting value stored in the string x

    x.clear();
    cout << "after deletion of value of string x " << endl;
    cout << x;

    // comparing two strings

    string s1 = "omkar";
    string s2 = "bhor";
    cout << "after comparing s1 and s2 " << endl;
    cout << s1.compare(s2) << endl;

    // deleting some characters from string

    string aa = "omkar";
    aa.erase(1, 2);
    cout << aa << endl;

    // finding particular character or word is present in the string or not

    string bb = "omkar";
    cout << bb.find("ka") << endl; // this will give the index from where the given character or string starts

    // inserting in the string

    bb.insert(2, "YZ");
    cout << bb << endl;

    // finding length /size of the string

    string cc = "bhor";
    cout << cc.length() << endl;
    cout << cc.size() << endl;

    
    return 0;
}