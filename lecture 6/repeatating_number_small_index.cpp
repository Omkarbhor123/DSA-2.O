#include<iostream>
#include<climits>
using namespace std;
void repeatating_element_whose_first_occurance_index_is_small(int arr[],int n)
{
    int N =1e6+2;

    int repeat[N];
    int minindex=INT_MAX;

    for(int i=0;i<N;i++)
    {
        repeat[i]=-1;
    }

    for(int i=0;i<n;i++)
    {
        if(repeat[arr[i]]!=-1)
        {
            minindex=min(minindex,repeat[arr[i]]);
        }
        else{
            repeat[arr[i]]=i;
        }
    }
    if(minindex==INT_MAX)
    {
        cout<<"array does not contains any repeatating element"<<endl;
    }
    else{
        cout<<"minimum index:"<<minindex+1<<endl;
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

   repeatating_element_whose_first_occurance_index_is_small(arr,n);

    return 0;
}