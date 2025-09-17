
#include <iostream>
using namespace std;

int main() {
    int arr[3] = {11, 22, 33};
    int *p = arr;

     for (int i = 0; i < 3; i++) {
        cout << *p << endl; // print value
        p++; // move pointer to next element
    }
return 0;
}    