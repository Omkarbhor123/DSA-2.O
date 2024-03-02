
// print all the subset of the given array

#include <bits/stdc++.h>
using namespace std;

    
    void solve(vector<int> nums,vector<int> output, int index,vector<vector<int>> &ans)
    {
        //base case
        if(index >= nums.size()) // If the index exceeds or equals the size of the array, it means we have reached the end of the array. At this point, the current subset stored in output is added to the result vector ans.
        {
            ans.push_back(output);
            return;
        }
        
        //exclude
        solve(nums,output,index+1,ans);
        
        //include 
        int element = nums[index]; //we're including this element in the subset that we are currently constructing
        output.push_back(element); 
        solve(nums, output, index+1, ans);
        
    }
    vector<vector<int>> subsets(vector<int>& nums)
    {
       vector<vector<int>>ans; // all subset we will store in this vector of vector 
       vector<int>output;   // current constructed subset we will store in the output array
       int index = 0;   // this will point to the index of nums if it's reach at the end or greater than size of the array (nums) then we will stop
       solve(nums,output,index,ans);
      sort(ans.begin(), ans.end()); // to sort the given subset in lexographical order 
       return ans;

    }


int main()
{
	vector<int> array = {1, 2, 3}; 

    vector<vector<int>> result = subsets(array);

    // Print result
    for (int i = 0; i < result.size(); i++) 
    {
      
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
    
        cout << endl;
    }

	return 0;
}
