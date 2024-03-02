#include <iostream>
using namespace std;

void checkEvenOdd(int num) {
    // Using bitwise AND operation to check if the least significant bit is set or not
    // If it's set(means last bit is 1), the number is odd, otherwise it's even
   
    if (num & 1)
     {
        cout << num << " is odd." << endl;
    } 
    else 
    {
        cout << num << " is even." << endl;
    }
    
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    checkEvenOdd(number);

    return 0;
}
