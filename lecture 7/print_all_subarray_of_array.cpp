#include<iostream>
using namespace std;
void sub_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {   
        for(int j=i;j<n;j++)
        {   
            cout<<"[";
            for(int k=i;k<=j;k++)
            {
                cout<<" "<<arr[k]<<" ";
            }
            cout<<"]"<<endl;
        }
    }
}
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

    sub_array(arr, n);
    return 0;
}