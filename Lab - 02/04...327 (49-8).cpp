// CODEFORCE
//Problem No : 158A
//Problem NaME : Next round

#include<iostream>
using namespace std;

int main(){
    int n, i, a, b, c, count=0;
    cin>>n;

    for(i=1; i<=n; i++){
        cin>>a>>b>>c;
        if(a+b+c >= 2){
            count++;
        }

    }
    cout<< count <<endl;


    return 0;
}
