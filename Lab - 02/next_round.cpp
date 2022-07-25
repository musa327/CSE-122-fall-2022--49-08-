
#include<iostream>
using namespace std;

int main()
{
    int n, k, a[100], l=0;
    cin>> n;
    cin>> k;

    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    for(int i=1; i<=n; i++)
    {
        if(a[i]>=a[k] && a[i]!= 0)
        {
            l++;
        }
    }
    cout<< l << endl;

    return 0;
}
