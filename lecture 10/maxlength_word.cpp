#include<iostream>
using namespace std;

int main()
{
   int n;
   cout<<"enter size:";
   cin>>n;

   char arr[n];
   cout<<"enter the sentence:";
   cin.getline(arr,n);
   cin.ignore();

int i= 0;

int current=0;
int ans=0;

   while(arr[i]!='\0')
   {
        if(arr[i]!=' ')
        {
            current++;

            ans=max(ans,current);


        }
        else
        {
            current=0;
        }

        i++;
   }

cout<<ans;

    return 0;
}