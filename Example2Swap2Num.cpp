
#include<iostream>
using  namespace std;

void swapBypointer(int *a, int *b){

int temp = *a;
    *a = *b;
    *b = temp;

}
int main(){

    int x = 5, y = 10;
    cout << "Before: x=" << x << " y=" << y << "\n";
    swapBypointer(&x, &y);   //pass addresses
     cout << "After:  x=" << x << " y=" << y << "\n";

     return 0;
}