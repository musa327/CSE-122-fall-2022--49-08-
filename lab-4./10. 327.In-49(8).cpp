
// CODEFORCE -
//Problem No :281A
//Problem NaME : A. Word Capitalization

#include<iostream>

using namespace std;


int main()
{
    string str;

    cin>>str;

    int i=0;

   if((str[0] - 'Z')>0){

    i = str[0]-'Z'-7;

    str[0] = ('A'+i);
    cout<<str;
   }
   else cout<<str;

   return 0;

}
