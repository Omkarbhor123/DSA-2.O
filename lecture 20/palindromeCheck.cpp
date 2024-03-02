
#include<iostream>
using namespace std;

bool checkPalindrome(string s,int i,int j)
{
    if(i>j)//base case
    {
        return true;
    }

    if(s[i]!=s[j]) //solving one case
    {
        return false;
    }
    else{
        
     return checkPalindrome( s, i+1,j-1);
    }



}
int main()
{
    string name= "aaaaa";

    bool ispalindrome= checkPalindrome( name, 0,name.length()-1);

    if(ispalindrome)
    {
        cout<<"string is palindrome";
    }
    else
    {
        cout<<"not palidrome";
    }
    return 0;
}