#include <iostream>
using namespace std;

int main()
{
    // declaring character is_array

    char arr[50] = "OMKAR";

    int i = 0;

    while (arr[i] != '\0') // '\0' it is null character it automatically gets added when the string  end
    {
        cout << i << " -> " << arr[i] << endl;
        i++;
    }

    // taking input in the character is_array

    char A[20];
    cout << "enter the character :";
    cin >> A;

//  printing the character array 

    cout << A << endl;

    // ---------------- or ------------------

    int j = 0;
    while (A[j] != '\0')
    {
        cout << A[j] << " ";

        j++;
    }

    // we can access particular character also

    cout << A[2] << endl;

    
    return 0;
}