
#include<iostream>
using namespace std;

int main(){
    int x = 5;
    int *p = &x;

    cout<<"x = "<<x<<endl;
    cout<<"&x = "<<&x<<endl;
    cout<<"p = "<<p<<endl;
    cout<<"*p ="<<*p<<endl;

    //change value via pointer
    *p = 25;
    cout<<"x after *p  :"<<x<<endl;

    return 0;
}