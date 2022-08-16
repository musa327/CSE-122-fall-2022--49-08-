
// CODEFORCE -
//Problem No :791A
//Problem NaME : A. Bear and Big Brother
#include<iostream>
using namespace std;

int main()
{
    int a, b, i;
    cin >> a >> b;

    for(i = 1; ; i++){
        a *= 3;
        b *= 2;
        if(a > b)
        break;
    }
    cout << i << endl;
}
