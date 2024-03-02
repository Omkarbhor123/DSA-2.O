#include <iostream>
using namespace std;

int main()
{
    int n, m, target;

    cout << "enter the no. of rows:";
    cin >> n;

    cout << "enter the no. of columns:";
    cin >> m;

    cout << "enter the element which you want to search:";
    cin >> target;
    cout << endl;

    int matrix[n][m];

    cout << endl;
    cout << "please enter sorted matrix in ascending order:" << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "enter the " << i << " , " << j << " position number:";
            cin >> matrix[i][j];
        }
    }

    // ----------------------------- SEARCHING WITH TIME COMPLEXITY O(n) -----------------------------------------------------

    // NOTE :- to search element in the matrix with time complexity O(n) we requires sorted matrix both rowwise and columnwise means
    // row should be sorted.may be  in ascending order form left to right or vice versa and column should be sorted. may be from top to bottom in ascending order or vice versa

    //  starting position  we can not start searching from the matrix[0][0] bez when we start from here then we will get only greater elements
    // than matrix[0][0] so we will not able to decide where to go either should we go towards right or we should go to bottom 

// starting position  we can not start searching from the matrix[n][m] bez when we start from here then we will get only smaller elements
    // than matrix[0][0] in both direction in left and in top  so we will not able to decide where to go either should we go towards left or we should go to top

    // so start from matrix[n][0] or matrix[0][m]

    int r = 0;
    int c = m - 1;            // starting from matrix[0][m] assigned m-1 as indexing start from 0

    bool found = false;

    while (r < n && c >= 0)
    {
        if (matrix[r][c] == target)
        {
            found = true;
        }
        if (matrix[r][c] > target)
        {
            c--; // 
        }
        else
        {
            r++;
        }
    }
    if (found)
    {
        cout << "element found:" << endl;
    }
    else
    {
        cout << "element not found !!!" << endl;
    }
    return 0;
}