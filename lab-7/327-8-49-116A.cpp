// CODEFORCE -
//Problem No :116A
//Problem NaME : team


#include<iostream>
using namespace std;

int main()
{
    int n, a, b, p = 0, max = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a >> b;
        p = b - a + p;
        if(max < p)
        max = p;
    }
    cout << max << endl;
}