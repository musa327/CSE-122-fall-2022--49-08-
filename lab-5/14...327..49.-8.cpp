// CODEFORCE -
//Problem No :791A
//Problem NaME : A. Bear and Big Brother

#include<iostream>
using namespace std;

int main()
{
    int n, k, w, sum = 0, d;

    cin >> n;
    cin >> k;
    cin >> w;

    for(int i = 1; i <= w; i++){
      sum += i;
    }
    d = (sum * n) - k;
    if(d < 0)
    cout << "0";
    else
    cout << d;


}
