#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of the array:";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the number:";
        cin >> arr[i];
    }

    // int maxno = arr[0];
    // int minno = arr[0];

    // cout << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > maxno)
    //     {
    //         maxno = arr[i];
    //     }

    //     if (arr[i] < minno)
    //     {
    //         minno = arr[i];
    //     }
    // }

    // cout << "max=" << maxno << " "
    //      << "min=" << minno << endl;

    // return 0;

    //    -------------------------------OR----------------------------

    int maxno=INT_MIN;              // INT_MIN is the MINIMUM possible integer  element in c++
    int minno=INT_MAX;             // INT_MAX is the maximum possible integer  element in c++
                                //to find min and maximum we always assign the min with maximum possible element and max with minimum posiible element 
    cout<<endl;

    for(int i=0;i<n;i++)
    {
        maxno=max(maxno,arr[i]);       // max is a inbuilt function in c++
        minno=min(minno,arr[i]);
    }

    cout <<"max="<<maxno<<" "<<"min="<<minno<<endl;

    return 0;
}