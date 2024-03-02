#include <iostream>
using namespace std;

int spiral_matrix_print(int arr[4][4] , int n, int m)
{
    int row_start = 0;
    int row_end = n - 1;
    int column_start = 0;
    int column_end = m - 1;

    while (row_start <= row_end && column_start <= column_end)
    {
        // for row_start

        for (int col = column_start; col <= column_end; col++)
        {
            cout << arr[row_start][col] << " ";
        }

        row_start++;

        // for column_start

        for (int row = row_start; row <= row_end; row++)
        {
            cout << arr[row][column_end] << " ";
        }

        column_end--;

        // for row_end

        for (int col = column_end; col >= column_start; col--)
        {
            cout << arr[row_end][col] << " ";
        }

        row_end--;

        // for column_end

        for (int row = row_end; row >= row_start; row--)
        {
            cout << arr[row][column_start] << " ";
        }

        column_start++;
    }
    return 0;
}
int main()
{

    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    spiral_matrix_print(arr, 4, 4);

    //    ------------------- OR -------------------------------

    // int n, m;

    // cout << "enter the no. of rows:";
    // cin >> n;

    // cout << "enter the no. of columns:";
    // cin >> m;

    // int arr[n][m];

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << "enter the " << i << " , " << j << "  number:";
    //         cin >> arr[i][j];
    //     }
    // }

    // spiral_matrix_print(arr, n, m);

    return 0;
}