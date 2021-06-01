#include <iostream>
using namespace std;
// This is a factorial program using function
// for lesson https://www.youtube.com/watch?v=L-5cmL-Edxk
// for more lessons visit https://s4ifbn.com
// (C) Saif Bashar 2016

int fact(int);

int main(){
    int n, m;
    cout<<"enter your number : ";
    cin>>n;

    cout<<"factorial is : "<<fact(n)<<endl;

    cout<<"enter another number : ";
    cin>>m;

    cout<<"factorial is : "<<fact(m)<<endl;

    return 0;
}

int fact(int n){
    int f=1;
    for(int i=n; i>1; i--)
        f=f*i;

    return f;
}
