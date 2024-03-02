// given set/array of unique elements find the subset of the given array or set

#include <iostream>
using namespace std;

void generateSubsets(const int arr[], int n, int currentSubset[], int subsetSize, int index)
{
    if (index == n) // if index exceed's the size of given array then print the subset
    {
        // Print the current subset
        for (int i = 0; i < subsetSize; i++)
        {
            cout << currentSubset[i] << " ";
        }
        cout << endl;
        return;
    }

    // Exclude the current element
    generateSubsets(arr, n, currentSubset, subsetSize, index + 1);

    // Include the current element
    currentSubset[subsetSize] = arr[index];
    generateSubsets(arr, n, currentSubset, subsetSize + 1, index + 1);
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ansSize = 1 << n; // total number of subset will form 2^n including empty subset

    int currentSubset[ansSize]; // array to store all subsets

    generateSubsets(arr, n, currentSubset, 0, 0);

    return 0;
}

//    generateSubsets(arr, n, currentSubset, 0, 0);

// arr: A constant integer array holding the input elements for which subsets are to be generated.
// n: An integer representing the size (number of elements) in the input array arr.
// currentSubset: An integer array used to temporarily store the current subset being constructed during recursion.
// subsetSize: An integer tracking the current number of elements in the currentSubset array.
// index: An integer indicating the current position being considered in the input array arr.