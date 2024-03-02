

#include<iostream>
using namespace std;

void reverseString(string& str, int i ,int j)// here new str variable will get create and string reversed will not reverse in actual variable (name) so used & (pass by reference) to change in actual variable
{
    
    if(i>j)
    {
        return;
    }
    
   swap(str[i],str[j]);
    i++;
    j--;
    reverseString(str,i,j);
    // cout<<str;
}
int main()
{
    string name ="omkarbhor";
    int i =0;
    int j= name.length()-1;

    reverseString(name ,i,j);
    cout<<name;
    return 0;
}