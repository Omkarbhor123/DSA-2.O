#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4;

    cout << "enter the no. of rows m1:";
    cin >> n1;

    cout << "enter the no. of columns of m1:";
    cin >> n2;

    cout << "enter the no. of rows m2:";
    cin >> n3;

    cout << "enter the no. of columns of m2:";
    cin >> n4;

    cout << endl;

    if (n2 != n3)
    {
        cout << endl;
        cout << "Matrix multiplication is not posiible !!! " << endl;
        cout << endl;
    }
    else
    {
        int M1[n1][n2];
        int M2[n2][n4];

        cout << "for matrix M1 :-" << endl;
        cout << endl;

        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                cout << "enter the " << i << " , " << j << " position number:";
                cin >> M1[i][j];
            }
        }
    cout << endl;
        cout << "for matrix M2 :-" << endl;
        cout << endl;

        for (int i = 0; i < n3; i++)
        {
            for (int j = 0; j < n4; j++)
            {
                cout << "enter the " << i << " , " << j << " position number:";
                cin >> M2[i][j];
            }
        }

        int ans[n1][n4];

        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < n4; j++)
            {

                ans[i][j] = 0;
            }
        }

        for (int i = 0; i < n1; i++)    // for matrix m1 traveersing rowwise
        {
            for (int j = 0; j < n4; j++)  // for matrix m2 traversing columwise
            {
                for (int k = 0; k < n2; k++) // for multiplication matrix or for multiplication of m1 and m2 matrix
                {
                    ans[i][j] = ans[i][j] + M1[i][k] * M2[k][j];
                }
            }
        }

        cout << "\n Multiplication of M1 and M2 is :" << endl;
        cout << endl;

        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < n4; j++)
            {

                cout << ans[i][j] << " ";
            }

            cout << endl;
        }

        cout << endl;
    }

    return 0;
}