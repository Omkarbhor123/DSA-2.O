#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    // we know that the  ASCII value of the small 'a' is 97 and the capital A is 65 so the difference between both is 32 

    cout<<"difference between small a and capital A : "<<'a'-'A'<<endl;  // 32 

    // so if we will add 32 in capital A then we will get an small a and when we will substract 32 from small 'a ' then we will get capital A

//  converting string into LOWERCASE 

string st = "HELLO WELCOME  FDF fdsSDsd";

for(int i=0 ; i<26 ; i++)
{
    if(st[i]>='A' && st[i]<='Z')
    {
        st[i] = st[i] + 32;     // two convert into lowercase add 32
    }
}
 
cout<<st<<endl;


//  converting string into UPPERERCASE 


for(int i=0 ; i<26 ; i++)
{
    if(st[i]>='a' && st[i]<='z')
    {
        st[i] = st[i] - 32;     // two convert into lowercase add 32
    }
}

cout<<st<<endl;

// --------------------------------------------------- OR -------------------------------------------------------

// using BUIT-IN function we can convert string or character to uppercase or in lowercase 

// first include the algorithm header file


// converting in LOWERCASE 

string str =" DSFDSGF GRGFG TRYHGJH FHGFNFDFVDFB fgd gdf df";

transform(str.begin(),str.end(),str.begin(),::tolower);  // it takes four parameters starting of the string ,end of the string , destination where we want to store result
// or output here we are storing the string after converting it into lpwercase  to the same string str so that we have given str,begin()
// as an third parameter , then :: type in which we want to convert 

cout<<str<<endl;

// converting in UPPERCASE 

transform(str.begin(),str.end(),str.begin(),::toupper);

cout<<str<<endl;


    return 0;
}