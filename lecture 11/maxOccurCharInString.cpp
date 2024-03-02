#include<iostream>
using namespace std;

int main()
{
    string st="omkar bhor rrrr";

    // first we will find the frequency of each char in the string 
// for that we maintain one array of size 26 as we know that alphabets are 26 only 

int freq[26]={0};

for(int i=0;i<st.size();i++)
{
    freq[st[i]-'a']++;   //we will subdtract the string character from small 'a' as small
    // 'a' ASCII value is 97 and when we substrat the string char from a then we will get index or position of that char in the freq array
    // for example ASCII value of b is 98 so 98-97 = 1 so we will incriment the value at position 1 when b is occurs in the string    

}

int max= 0;
char ans='a';

for(int i=0;i<26;i++)
{
    if(freq[i]>max)
    {
        max=freq[i];

        ans = i+'a'; //to get the character which occure maximum time  the ASCII value of the a is 97 so when we add i in that then it will give the char at that position
    }
}   

cout<<"character with maximum frequency "<<max<<"is"<< ans<<endl; 



 return 0;
}