#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cout << "enter the no. of rows:";
    cin >> n;

    cout << "enter the no. of columns:";
    cin >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "enter the " << i << " , " << j << "  number:";
            cin >> arr[i][j];
        }
    }

    // -------------------- TRANSPOSE OF MATRIX ----------------------------------------

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++) // started with i because when  we are doing a[i][j]=a[j][i] then a[j][i] position element we no need to change again 
        {
            if (i != j)          // after transpose the diagonal elements are remains same so we will not swap them 
            {
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }

    cout << "transpose of matrix is:" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}