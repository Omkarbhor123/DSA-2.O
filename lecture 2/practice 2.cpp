#include <iostream>
using namespace std;
int main()
{

    int pocketmoney = 10000;

    for (int i = 0; i < 30; i++)
    {
        if (i % 2 == 0)
        {
            pocketmoney = pocketmoney - 1000;
            continue;
        }
        if (pocketmoney == 0)
        {
            cout << endl;
            cout << "your pocketmoney is over !!! you can not go on long drive" << endl;

            break;
        }

        cout << endl;
        cout << i << endl;
        cout << "AS today is even day you can go on long drive" << endl;
    }

    return 0;
}